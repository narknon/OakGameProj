#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGFxHUDWidget.h"
#include "UObject/NoExportTypes.h"
#include "ESkillWidgetSlot.h"
#include "GFxActionSkillWidget.generated.h"

class UGbxAbility;
class UGbxGFxObject;
class UOakPlayerAbilitySlotData;
class UGbxGFxProgressBar;
class UOakActionAbility;
class UOakActionAbilityAugmentSlotData;

UCLASS(Blueprintable)
class OAKGAME_API UGFxActionSkillWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FString GFxKEY_ActionSkillInner;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ActionSkillInner;
    
    UPROPERTY(EditAnywhere)
    FString GFxKEY_CantUseFlourish;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CantUseFlourish;
    
    UPROPERTY(EditAnywhere)
    FString GFxKEY_StatusBar;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* StatusBar;
    
    UPROPERTY(EditAnywhere)
    FString GFxKEY_CountdownTimerText;
    
    UPROPERTY(EditAnywhere)
    FString GFxKEY_SkillIconContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SkillIconContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DynamicSkillIcon;
    
    UPROPERTY(EditAnywhere)
    FString GFxKEY_RemainingChargesDisplay;
    
    UPROPERTY(EditAnywhere)
    FString GFxKEY_RemainingChargesContainer;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ReadyForActivationColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor RechargingOrCooldownColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESkillWidgetSlot SlotToWidgetMapping;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CoundownSecondsMaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CountdownSecondsAudioValue;
    
    UPROPERTY(EditAnywhere)
    int32 SlotIndex;
    
    UPROPERTY(EditAnywhere)
    FName SkillUsedFailAudioEventName;
    
    UPROPERTY(EditAnywhere)
    TArray<UOakPlayerAbilitySlotData*> AssignedSlots;
    
    UPROPERTY(BlueprintReadOnly)
    UOakActionAbility* TrackedActionAbility;
    
    UPROPERTY(Transient)
    FName SkillFailedCharacterSpecific;
    
    UPROPERTY(Transient)
    FString IconKey;
    
public:
    UGFxActionSkillWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetRemainingCharges(int32 NewRemainingCharges) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetBarColor(FLinearColor InColor) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResourceRegeneratingEvent() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResourceDepletedEvent() const;
    
protected:
    UFUNCTION()
    void OnTrackedActionAbilityStateChanged(UGbxAbility* UpdatedAbility) const;
    
public:
    UFUNCTION()
    void OnActionSkillFailedActivation(UOakActionAbility* InActionAbility, uint8 ErrorCode) const;
    
    UFUNCTION()
    void OnActionSkillChargeCountChanged(UOakActionAbility* InActionAbility) const;
    
    UFUNCTION()
    void OnActionSkillActivated(UOakActionAbility* InActionAbility) const;
    
    UFUNCTION()
    void OnActionAbilityAugmentChanged(TSubclassOf<UOakActionAbility> ActionAbilityClass, UOakActionAbilityAugmentSlotData* SlotData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ForceResourceProgress(float PercentProgress) const;
    
    UFUNCTION()
    void extActivatedAnimationComplete() const;
    
};

