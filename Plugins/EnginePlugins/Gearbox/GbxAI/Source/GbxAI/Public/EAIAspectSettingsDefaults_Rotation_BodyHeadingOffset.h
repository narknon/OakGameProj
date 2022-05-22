#pragma once
#include "CoreMinimal.h"
#include "EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset.generated.h"

UENUM(BlueprintType)
enum class EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset : uint8 {
    Front,
    Back,
    Left,
    Right,
    Custom,
    EAIAspectSettingsDefaults_Rotation_MAX UMETA(Hidden),
};

