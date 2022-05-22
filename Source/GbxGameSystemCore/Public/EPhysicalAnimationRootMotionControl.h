#pragma once
#include "CoreMinimal.h"
#include "EPhysicalAnimationRootMotionControl.generated.h"

UENUM(BlueprintType)
enum class EPhysicalAnimationRootMotionControl : uint8 {
    PARMC_DrivenByAnimated,
    PARMC_PureDynamic,
    PARMC_SimulatedPointDrive,
    PARMC_SimulatedOrientationDrive,
    PARMC_MAX UMETA(Hidden),
};

