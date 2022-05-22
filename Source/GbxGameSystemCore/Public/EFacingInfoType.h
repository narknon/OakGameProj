#pragma once
#include "CoreMinimal.h"
#include "EFacingInfoType.generated.h"

UENUM(BlueprintType)
enum class EFacingInfoType : uint8 {
    None,
    Actor,
    ActorEyes,
    Component,
    Location,
    Direction,
    Rotation,
    Controller,
    ControllerAim,
    Path,
    Count,
};

