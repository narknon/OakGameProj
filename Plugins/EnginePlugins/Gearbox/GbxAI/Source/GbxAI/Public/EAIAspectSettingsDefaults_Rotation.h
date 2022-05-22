#pragma once
#include "CoreMinimal.h"
#include "EAIAspectSettingsDefaults_Rotation.generated.h"

UENUM(BlueprintType)
enum class EAIAspectSettingsDefaults_Rotation : uint8 {
    Custom,
    None,
    NoBodyRotationAllowed,
    FullBody,
    AimOffsetsOnly,
    FullBodyWithAim,
    EAIAspectSettingsDefaults_MAX UMETA(Hidden),
};

