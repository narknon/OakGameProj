#pragma once
#include "CoreMinimal.h"
#include "EGbxDialogSocialStrategy.generated.h"

UENUM(BlueprintType)
enum class EGbxDialogSocialStrategy : uint8 {
    Normal,
    Selfish,
    NonSocial,
};

