#pragma once
#include "CoreMinimal.h"
#include "ShieldAugment.h"
#include "AttributeModifiers.h"
#include "ShieldAugment_Attribute.generated.h"

class UWwiseEvent;

UCLASS(EditInlineNew)
class UShieldAugment_Attribute : public UShieldAugment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttributeModifiers> OnEquippedAttributeModifiers;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* OnEquippedAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTurnOffEquippedAudio;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttributeModifiers> OnFilledAttributeModifiers;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* OnFilledAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTurnOffFilledAudio;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttributeModifiers> OnNotDepletedAttributeModifiers;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* OnNotDepletedAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTurnOffNotDepletedAudio;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttributeModifiers> OnDepletedAttributeModifiers;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* OnDepletedAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTurnOffDepletedAudio;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplyDefaultEffectsToPlayersInAura;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplyEffectsToBarrier;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttributeModifiers> PersistentAuraAttributeModifiers;
    
public:
    UShieldAugment_Attribute();
};

