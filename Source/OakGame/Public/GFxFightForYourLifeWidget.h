#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxFightForYourLifeWidget.generated.h"

class UGbxHUDStateData;
class UGbxGFxObject;
class UFightForYourLifeComponent;
class UGbxTextField;
class UGbxGFxProgressBar;
class UGbxGFxHintWidget;
class UOakActionAbility;
class UOakPlayerAbilitySlotData;

UCLASS()
class UGFxFightForYourLifeWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UFightForYourLifeComponent* AssociatedFFYLComponent;
    
    UPROPERTY(Transient)
    UGbxGFxObject* IconSwitcher;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LabelContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* MainLabel;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* DyingBar;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* ReviveBar;
    
    UPROPERTY(EditAnywhere)
    float MaxHoldToGiveUpTime;
    
    UPROPERTY(Transient)
    UGbxTextField* ActionText;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* GiveUpHint;
    
    UPROPERTY(EditAnywhere)
    UGbxHUDStateData* FFYLHUDState;
    
    UGFxFightForYourLifeWidget();
protected:
    UFUNCTION()
    void OnRevivingStop(bool IsHealed) const;
    
    UFUNCTION()
    void OnRevivingStart() const;
    
    UFUNCTION()
    void OnRevivingNonLocalStop(UFightForYourLifeComponent* OtherFFYL) const;
    
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
    UFUNCTION()
    void OnGiveUpStop() const;
    
    UFUNCTION()
    void OnDownStop() const;
    
    UFUNCTION()
    void OnDownStart() const;
    
    UFUNCTION()
    void OnDownFinish() const;
    
    UFUNCTION()
    void OnBeingRevivedStop() const;
    
    UFUNCTION()
    void OnBeingRevivedStart() const;
    
    UFUNCTION()
    void OnActionSkillCoolingDown(UOakActionAbility* InActionAbility) const;
    
    UFUNCTION()
    void OnActionSkillActivated(UOakActionAbility* InActionAbility) const;
    
    UFUNCTION()
    void OnAbilitySlotChanged(UOakPlayerAbilitySlotData* SlotData) const;
    
};

