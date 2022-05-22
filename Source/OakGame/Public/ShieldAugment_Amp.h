#pragma once
#include "CoreMinimal.h"
#include "ShieldAugment.h"
#include "ShieldAugment_Amp.generated.h"

class UWwiseEvent;
class UWeaponShotModifier;

UCLASS(EditInlineNew)
class UShieldAugment_Amp : public UShieldAugment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UWeaponShotModifier* ShotModifier;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* AmpShotAudio;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* AmpReadyAudioStart;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* AmpReadyAudioStop;
    
public:
    UShieldAugment_Amp();
};

