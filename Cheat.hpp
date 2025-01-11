#pragma once
#include "Config.hpp"
#define M_PI       3.14159265358979323846
#include "imgui/imgui.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_impl_dx11.h"

namespace Render {

	void esp(SDK::AActor* Actor, SDK::APlayerController* MyController) {
        /* The 2nd and 3rd checks are equal, prefer using EClassCastFlags if available for your class. */
        if (!Actor || !Actor->IsA(SDK::EClassCastFlags::Pawn) || !Actor->IsA(SDK::APawn::StaticClass()))
            return;

        SDK::APawn* Pawn = static_cast<SDK::APawn*>(Actor);

        if (Pawn->Controller == MyController)
            return;
        
        SDK::AController* controller = Pawn->Controller;
        if (controller == nullptr)
            return;
   
        auto loc = Pawn->GetTransform().Translation;


        SDK::FVector origin = {0,0,0};
        SDK::FVector bext = { 0,0,0 };
        
        Pawn->GetActorBounds(true, &origin, &bext, false);

        SDK::FVector corner1 = origin + SDK::FVector(0, bext.Y, bext.Z);
        SDK::FVector corner2 = origin + SDK::FVector(0, -bext.Y, bext.Z);
        SDK::FVector corner3 = origin + SDK::FVector(0, bext.Y, -bext.Z);
        SDK::FVector corner4 = origin + SDK::FVector(0, -bext.Y, -bext.Z);

        // Fuck my balls
        SDK::FVector2D projectedCorner1, projectedCorner2, projectedCorner3, projectedCorner4;
        MyController->ProjectWorldLocationToScreen(corner1, &projectedCorner1, true);
        MyController->ProjectWorldLocationToScreen(corner2, &projectedCorner2, true);
        MyController->ProjectWorldLocationToScreen(corner3, &projectedCorner3, true);
        MyController->ProjectWorldLocationToScreen(corner4, &projectedCorner4, true);

        auto color = ImColor(Settings::color[0], Settings::color[1], Settings::color[2]);
        auto drawlist = ImGui::GetForegroundDrawList();

        // Fuck my balls
        drawlist->AddLine(ImVec2(projectedCorner1.X, projectedCorner1.Y), ImVec2(projectedCorner2.X, projectedCorner2.Y), color);
        drawlist->AddLine(ImVec2(projectedCorner2.X, projectedCorner2.Y), ImVec2(projectedCorner4.X, projectedCorner4.Y), color);
        drawlist->AddLine(ImVec2(projectedCorner4.X, projectedCorner4.Y), ImVec2(projectedCorner3.X, projectedCorner3.Y), color);
        drawlist->AddLine(ImVec2(projectedCorner3.X, projectedCorner3.Y), ImVec2(projectedCorner1.X, projectedCorner1.Y), color);

        if (Settings::name)
        {
            drawlist->AddText(ImVec2(projectedCorner1.X - (projectedCorner1.GetDistanceTo(projectedCorner2) ), projectedCorner1.Y-10), ImColor(1.0f, 1.0f, 1.0f), Pawn->GetName().c_str());
        }
    }

    void tracers(SDK::AActor* Actor, SDK::APlayerController* MyController) {
        /* The 2nd and 3rd checks are equal, prefer using EClassCastFlags if available for your class. */
        if (!Actor || !Actor->IsA(SDK::EClassCastFlags::Pawn) || !Actor->IsA(SDK::APawn::StaticClass()))
            return;


        SDK::APawn* Pawn = static_cast<SDK::APawn*>(Actor);

        if (Pawn->Controller == MyController)
            return;


        SDK::AController* controller = Pawn->Controller;
        if (controller == nullptr)
            return;

        //std::cout << "bCanBeDamaged " << playerState->bCanBeDamaged << "\n";
        //std::cout << "bIsABot " << playerState->bIsABot << "\n";

        auto loc = Pawn->GetTransform().Translation;
        auto size = Pawn->GetTransform().Scale3D; // its not size fuck


        SDK::FVector2D projected = {0, 0};
            
        MyController->ProjectWorldLocationToScreen(loc, &projected, true);

        auto center = ImVec2(ImGui::GetIO().DisplaySize.x / 2, 0);

        auto color = ImColor(Settings::color[0], Settings::color[1], Settings::color[2]);
        //std::cout << "controller->Character->IsBotControlled() " << controller->Character->IsBotControlled() << "\n";

        ImGui::GetForegroundDrawList()->AddLine(center, ImVec2(projected.X, projected.Y - (size.Y / 2)), color);
    }

    void aim_fov() {
        auto center = ImVec2(ImGui::GetIO().DisplaySize.x / 2, ImGui::GetIO().DisplaySize.y / 2);

        ImGui::GetForegroundDrawList()->AddCircle(center, Settings::aim_fov, ImColor(255, 255, 255), 64);
    }
}

namespace Combat {
    void aim(SDK::AActor* Actor, SDK::APlayerController* MyController) {
        // Message to me in future: DONT TRY TO CHANGE ANYTHING DUMBASS

        if (!Actor || !Actor->IsA(SDK::EClassCastFlags::Pawn) || !Actor->IsA(SDK::APawn::StaticClass()))
            return;


        SDK::APawn* Pawn = static_cast<SDK::APawn*>(Actor);

        if (Pawn->Controller == MyController)
            return;

        SDK::AController* controller = Pawn->Controller;
        if (controller == nullptr)
            return;

        auto loc = Pawn->GetTransform().Translation + SDK::FVector(0, 0, Settings::aim_oy);
        auto size = Pawn->GetTransform().Scale3D;


        SDK::FVector2D projected = { 0, 0 };

        //std::cout << "Pawn->bCanBeDamaged " << std::hex << int(Pawn->bCanBeDamaged) << std::dec << "\n";


        MyController->ProjectWorldLocationToScreen(loc, &projected, true);

        auto center = SDK::FVector2D(ImGui::GetIO().DisplaySize.x / 2, ImGui::GetIO().DisplaySize.y / 2);

        float distance = std::sqrt(std::pow(center.X - projected.X, 2) + std::pow(center.Y - projected.Y, 2));

        if (distance > Settings::aim_fov) {
            return;
        }

        SDK::APlayerCameraManager* CameraManager = MyController->PlayerCameraManager;
        if (!CameraManager)
            return;

        SDK::FVector CameraLocation = CameraManager->GetCameraLocation();
        SDK::FRotator CameraRotation = CameraManager->GetCameraRotation();

        SDK::FVector direction = loc - CameraLocation;

        float magnitude = std::sqrt(direction.X * direction.X + direction.Y * direction.Y + direction.Z * direction.Z);
        if (magnitude == 0.0f)
            return;

        SDK::FVector normalizedDirection = {
            direction.X / magnitude,
            direction.Y / magnitude,
            direction.Z / magnitude
        };

        float yaw = std::atan2(normalizedDirection.Y, normalizedDirection.X) * (180.0f / M_PI);
        float pitch = std::asin(normalizedDirection.Z) * (180.0f / M_PI);

        SDK::FRotator aimRotation = { pitch, yaw, 0.0f };

        MyController->SetControlRotation(aimRotation);
    }
}

void on_render() {
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    SDK::APlayerController* MyController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;

    //std::cout << "Controller ok " << MyController << "\n";


    SDK::ULevel* Level = World->PersistentLevel;
    SDK::TArray<SDK::AActor*>& Actors = Level->Actors;

    if (Settings::aim) {
        Render::aim_fov();
    }
    try {
        for (SDK::AActor* Actor : Actors)
        {
            if (Settings::esp) {
                Render::esp(Actor, MyController);
            }
            if (Settings::tracers)
            {
                Render::tracers(Actor, MyController);
            }
            if (Settings::aim) {
                Combat::aim(Actor, MyController);
            }
        }
    }
    catch (...) {
        std::cout << "Error occured\n";
    }
}
