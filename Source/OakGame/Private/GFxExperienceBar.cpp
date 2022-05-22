#include "GFxExperienceBar.h"

class AGbxCharacter;

void UGFxExperienceBar::OnInputDeviceChanged() const {
}

void UGFxExperienceBar::NotifyPrimaryCharacterChanged(AGbxCharacter* NewPrimaryCharacter) const {
}

void UGFxExperienceBar::HandleVaultCardProgressAnimationComplete() const {
}

void UGFxExperienceBar::HandleSkillPointsChanged(int32 RemainingSkillPoints) const {
}

void UGFxExperienceBar::HandleProgressAnimationComplete() const {
}

void UGFxExperienceBar::HandleLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel) const {
}

void UGFxExperienceBar::HandleGuardianProgressAnimationComplete() const {
}

void UGFxExperienceBar::HandleGuardianExperienceAdded(const int32 Amount) const {
}

void UGFxExperienceBar::HandleExperienceAdded(const int32 ExperienceAdded, EPlayerExperienceSource Source, EPlayerExperienceType Type) const {
}

void UGFxExperienceBar::extFinishedDim() const {
}

UGFxExperienceBar::UGFxExperienceBar() {
    this->BarSpeedThreshold = 1.00f;
    this->BarSpeedModifier = 1.50f;
    this->FadeOutTime = 2.00f;
    this->LevelUpDelay = 1.00f;
    this->NAME_XPGain_Quick = TEXT("XP_Gain_Quick");
    this->NAME_XPGain_Slow = TEXT("XP_Gain_Slow");
    this->NAME_LEVEL_UP_SOUND = TEXT("LevelUp");
    this->LevelUpNotifcation = NULL;
    this->DimContainer = NULL;
    this->WrapperForBars = NULL;
    this->NormalXPProgressBar = NULL;
    this->VaultCardXPProgressBar = NULL;
    this->MayhemIcon = NULL;
    this->MayhemIconContainer = NULL;
    this->CitizenScienceBoosterIcon = NULL;
    this->StreamerPrimaryBoosterIcon = NULL;
    this->StreamerSecondaryBoosterIcon = NULL;
    this->GuardianXPProgressBar = NULL;
    this->SkillPointsAvailableWrapper = NULL;
    this->PlayerAbilityTree = NULL;
    this->NormalXPBarState = EGFxExperienceBarState::None;
    this->GuardianXPBarState = EGFxExperienceBarState::None;
    this->VaultCardXPBarState = EGFxExperienceBarState::None;
    this->CachedAmountOfMissionTrackerSlots = -1;
    this->CachedLevel = -1;
    this->LastLevelUpLevel = -1;
    this->CachedExperienceAmount = 0;
    this->CachedNextLevelExperience = 0;
    this->CachedPreviousLevelExperience = 0;
    this->AccumulatedExperience = 0;
    this->CachedRemainingSkillPoints = 0;
    this->CachedRemainingGuardianPoints = 0;
    this->CachedGuardianRank = 0;
    this->GuardianAccumulatedExperience = 0;
    this->GuardianCachedNextLevelExperience = 0;
    this->GuardianCachedPreviousLevelExperience = 0;
    this->GuardianCachedExperienceAmount = 0;
    this->CachedVaultCardRank = 0;
    this->VaultCardAccumulatedExperience = 0;
    this->VaultCardCachedNextLevelExperience = 0;
    this->VaultCardCachedPreviousLevelExperience = 0;
    this->VaultCardCachedExperienceAmount = 0;
}

