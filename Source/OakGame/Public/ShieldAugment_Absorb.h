#pragma once
#include "CoreMinimal.h"
#include "ShieldAugment.h"
#include "ShieldAugmentAbsorbRestoreData.h"
#include "ShieldAugment_Absorb.generated.h"

class UWwiseEvent;
class UGbxAttributeData;
class UParticleSystem;
class UGameStatData;
class UWeaponSlotData;

UCLASS(EditInlineNew)
class UShieldAugment_Absorb : public UShieldAugment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* AbsorbSound;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* AbsorbParticles;
    
    UPROPERTY(EditDefaultsOnly)
    FName ParticleAttachSocket;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* LoadedWeaponAmmoAttribute;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* WeaponMaxAmmoAttribute;
    
    UPROPERTY(EditDefaultsOnly)
    UWeaponSlotData* WeaponSlot;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* ShieldAbsorbChanceAttribute;
    
    UPROPERTY(EditDefaultsOnly)
    UGameStatData* AbsorbStat;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseRestoreData;
    
    UPROPERTY(EditDefaultsOnly)
    FShieldAugmentAbsorbRestoreData ShieldRestoreData;
    
public:
    UShieldAugment_Absorb();
};

