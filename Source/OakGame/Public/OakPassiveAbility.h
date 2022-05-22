#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityHUDItemValueProviderInterface.h"
#include "OakPlayerAbility.h"
#include "TriggeredPassiveAbilityEffect.h"
#include "OakPassiveAbilityHUDIconData.h"
#include "OakPassiveAbility.generated.h"

class UTexture;

UCLASS()
class OAKGAME_API UOakPassiveAbility : public UOakPlayerAbility, public IOakPlayerAbilityHUDItemValueProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    int32 Grade;
    
    UPROPERTY(EditDefaultsOnly)
    FTriggeredPassiveAbilityEffect TriggeredEffect;
    
    UPROPERTY(EditDefaultsOnly)
    bool bRegisterAsHUDPassiveAbility;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UTexture* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FOakPassiveAbilityHUDIconData HUDIconData;
    
public:
    UOakPassiveAbility();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerPassiveAbilityEffect();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTriggeredEffectEnded();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnGradeChanged();
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsTriggeredEffectActive() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetManualHUDIconValues(int32& outStackCount, float& outDuration, float& outTimeRemaining) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

