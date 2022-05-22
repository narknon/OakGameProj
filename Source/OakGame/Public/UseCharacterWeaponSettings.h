#pragma once
#include "CoreMinimal.h"
#include "UseCharacterWeaponSettings.generated.h"

USTRUCT(BlueprintType)
struct FUseCharacterWeaponSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ShootMaxAngle;
    
    OAKGAME_API FUseCharacterWeaponSettings();
};

