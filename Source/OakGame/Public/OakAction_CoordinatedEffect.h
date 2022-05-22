#pragma once
#include "CoreMinimal.h"
#include "GbxAction_CoordinatedEffect.h"
#include "OakAction_CoordinatedEffect.generated.h"

UCLASS()
class UOakAction_CoordinatedEffect : public UGbxAction_CoordinatedEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bHideWeaponParticles;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplyToWeapons;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplyToAttachedCharacters;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOnlyApplyToEquippedWeapons;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplyToLimbGore;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> OnlyApplyToComponentByName;
    
public:
    UOakAction_CoordinatedEffect();
};

