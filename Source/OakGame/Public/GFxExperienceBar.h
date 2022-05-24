#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "EPlayerExperienceSource.h"
#include "EGFxExperienceBarState.h"
#include "Engine/EngineTypes.h"
#include "EPlayerExperienceType.h"
#include "GFxExperienceBar.generated.h"

class UGbxGFxObject;
class UHUDNotificationAsset;
class UGbxGFxProgressBar;
class UPlayerGuardianRankComponent;
class UGFxPassiveSkillIcon;
class UOakPlayerAbilityTree;
class UPlayerBalanceStateComponent;
class AGbxCharacter;

UCLASS()
class OAKGAME_API UGFxExperienceBar : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BarSpeedThreshold;
    
    UPROPERTY(EditAnywhere)
    float BarSpeedModifier;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(EditAnywhere)
    float LevelUpDelay;
    
    UPROPERTY(EditAnywhere)
    FName NAME_XPGain_Quick;
    
    UPROPERTY(EditAnywhere)
    FName NAME_XPGain_Slow;
    
    UPROPERTY(EditAnywhere)
    FName NAME_LEVEL_UP_SOUND;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* LevelUpNotifcation;
    
    UPROPERTY(EditAnywhere)
    FText ActionSkillsAvailableForFirstTime;
    
    UPROPERTY(EditAnywhere)
    FText SkillPointsAvailableText;
    
    UPROPERTY(EditAnywhere)
    FText SkillPointsAvailableTextWithPrompt;
    
    UPROPERTY(EditAnywhere)
    FText GuardianPointsAvailableText;
    
    UPROPERTY(EditAnywhere)
    FText GuardianPointsAvailableTextWithPrompt;
    
    UPROPERTY(EditAnywhere)
    FText BothGuadianAndSkillPointsAvailableText;
    
    UPROPERTY(EditAnywhere)
    FText VaultCardRewardAvailable;
    
private:
    UPROPERTY(Transient)
    UGbxGFxObject* DimContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* WrapperForBars;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* NormalXPProgressBar;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* VaultCardXPProgressBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MayhemIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MayhemIconContainer;
    
    UPROPERTY(Transient)
    UGFxPassiveSkillIcon* CitizenScienceBoosterIcon;
    
    UPROPERTY(Transient)
    UGFxPassiveSkillIcon* StreamerPrimaryBoosterIcon;
    
    UPROPERTY(Transient)
    UGFxPassiveSkillIcon* StreamerSecondaryBoosterIcon;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* GuardianXPProgressBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SkillPointsAvailableWrapper;
    
    UPROPERTY(Export, Transient)
    UOakPlayerAbilityTree* PlayerAbilityTree;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPlayerBalanceStateComponent> PlayerBalanceState;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPlayerGuardianRankComponent> PlayerGuardianRank;
    
    UPROPERTY(Transient)
    EGFxExperienceBarState NormalXPBarState;
    
    UPROPERTY(Transient)
    EGFxExperienceBarState GuardianXPBarState;
    
    UPROPERTY(Transient)
    EGFxExperienceBarState VaultCardXPBarState;
    
    UPROPERTY(Transient)
    int32 CachedAmountOfMissionTrackerSlots;
    
    UPROPERTY(Transient)
    int32 CachedLevel;
    
    UPROPERTY(Transient)
    int32 LastLevelUpLevel;
    
    UPROPERTY(Transient)
    int32 CachedExperienceAmount;
    
    UPROPERTY(Transient)
    int32 CachedNextLevelExperience;
    
    UPROPERTY(Transient)
    int32 CachedPreviousLevelExperience;
    
    UPROPERTY(Transient)
    int32 AccumulatedExperience;
    
    UPROPERTY(Transient)
    int32 CachedRemainingSkillPoints;
    
    UPROPERTY(Transient)
    int32 CachedRemainingGuardianPoints;
    
    UPROPERTY(Transient)
    int32 CachedGuardianRank;
    
    UPROPERTY(Transient)
    int32 GuardianAccumulatedExperience;
    
    UPROPERTY(Transient)
    int32 GuardianCachedNextLevelExperience;
    
    UPROPERTY(Transient)
    int32 GuardianCachedPreviousLevelExperience;
    
    UPROPERTY(Transient)
    int32 GuardianCachedExperienceAmount;
    
    UPROPERTY(Transient)
    int32 CachedVaultCardRank;
    
    UPROPERTY(Transient)
    int32 VaultCardAccumulatedExperience;
    
    UPROPERTY(Transient)
    int32 VaultCardCachedNextLevelExperience;
    
    UPROPERTY(Transient)
    int32 VaultCardCachedPreviousLevelExperience;
    
    UPROPERTY(Transient)
    int32 VaultCardCachedExperienceAmount;
    
    UPROPERTY(Transient)
    FTimerHandle TimerHandle_FadeoutNormal;
    
    UPROPERTY(Transient)
    FTimerHandle TimerHandle_FadeoutGuardian;
    
    UPROPERTY(Transient)
    FTimerHandle TimerHandle_FadeoutVaultCard;
    
    UPROPERTY(Transient)
    FTimerHandle TimerHandle_LevelUpNormal;
    
    UPROPERTY(Transient)
    FTimerHandle TimerHandle_LevelUpGuardian;
    
    UPROPERTY(Transient)
    FTimerHandle TimerHandle_LevelUpVaultCard;
    
    UPROPERTY(Transient)
    FName SkillPointsAvailableCharacterSpecific;
    
public:
    UGFxExperienceBar();
private:
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
    UFUNCTION()
    void NotifyPrimaryCharacterChanged(AGbxCharacter* NewPrimaryCharacter) const;
    
    UFUNCTION()
    void HandleVaultCardProgressAnimationComplete() const;
    
    UFUNCTION()
    void HandleSkillPointsChanged(int32 RemainingSkillPoints) const;
    
    UFUNCTION()
    void HandleProgressAnimationComplete() const;
    
    UFUNCTION()
    void HandleLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel) const;
    
    UFUNCTION()
    void HandleGuardianProgressAnimationComplete() const;
    
    UFUNCTION()
    void HandleGuardianExperienceAdded(const int32 Amount) const;
    
    UFUNCTION()
    void HandleExperienceAdded(const int32 ExperienceAdded, EPlayerExperienceSource Source, EPlayerExperienceType Type) const;
    
    UFUNCTION()
    void extFinishedDim() const;
    
};

