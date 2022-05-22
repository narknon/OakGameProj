#pragma once
#include "CoreMinimal.h"
#include "WeaponUseModeAttributeEffectData.h"
#include "AttributeEffectData.h"
#include "WeaponBonusData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FWeaponBonusData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeaponUseModeAttributeEffectData> WeaponUseModeAttributeEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<FAttributeEffectData> InstigatorAttributeEffects;
    
public:
    FWeaponBonusData();
};

