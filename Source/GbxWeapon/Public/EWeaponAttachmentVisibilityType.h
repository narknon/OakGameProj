#pragma once
#include "CoreMinimal.h"
#include "EWeaponAttachmentVisibilityType.generated.h"

UENUM(BlueprintType)
enum EWeaponAttachmentVisibilityType {
    EWAVT_Both,
    EWAVT_FirstPerson,
    EWAVT_ThirdPerson,
    EWAVT_MAX UMETA(Hidden),
};

