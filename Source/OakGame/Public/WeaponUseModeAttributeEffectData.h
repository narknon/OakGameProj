#pragma once
#include "CoreMinimal.h"
#include "EWeaponUseMode.h"
#include "AttributeEffectData.h"
#include "WeaponUseModeAttributeEffectData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponUseModeAttributeEffectData {
    GENERATED_BODY()
public:
    UPROPERTY()
    EWeaponUseMode UseMode;
    
    UPROPERTY(EditAnywhere)
    int32 UseModeBitmask;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FAttributeEffectData> AttributeEffects;
    
    OAKGAME_API FWeaponUseModeAttributeEffectData();
};

