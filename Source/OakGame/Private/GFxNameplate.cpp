#include "GFxNameplate.h"

class UTeamComponent;
class UTeam;
class AGbxCharacter;
class UNameplateInfoProviderInterface;
class INameplateInfoProviderInterface;

void UGFxNameplate::OnTeamUpdated(UTeamComponent* NewTeam, UTeam* OldTeam) {
}

void UGFxNameplate::OnPrimaryCharacterChanged(AGbxCharacter* Character) {
}

void UGFxNameplate::OnOwningPlayerLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel) {
}

void UGFxNameplate::OnNameUpdated() {
}

void UGFxNameplate::OnLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel) {
}

TScriptInterface<INameplateInfoProviderInterface> UGFxNameplate::GetTargetInterface() {
    return NULL;
}

void UGFxNameplate::ForceUpdateFocusableBars() {
}

void UGFxNameplate::extDeathAnimComplete() {
}

void UGFxNameplate::AnimateBar(int32 Index, const FString& AnimationToPlay) {
}

UGFxNameplate::UGFxNameplate() {
    this->BarsFlashType = EEdgeFlashType::None;
    this->OverLevelIconPlacement = NULL;
    this->OverLevelIcon = NULL;
    this->NameTextContainer = NULL;
    this->NameplateBarsContainer = NULL;
    this->BarPrimary = NULL;
    this->BarSecondary = NULL;
    this->BarTertiary = NULL;
    this->LevelText = NULL;
    this->CenteredNameText = NULL;
    this->LeftNameText = NULL;
    this->RangeFadeCurve = NULL;
    this->FadeStartDistance = 0.00f;
    this->FadeEndDistance = 0.00f;
    this->BracketFadeCooldown = 3.00f;
    this->CurrentTargetDamageComponent = NULL;
    this->NameplateStyle = ENameplateStyle::Targeted;
    this->DesiredTargetedNameplateType = ETargetedNameplateType::Standard;
    this->TargetedNameplateState = ETargetedNameplateState::NotShowingTarget;
    this->ImmuneClipID = TEXT("immune");
    this->ImmuneAnimation = TEXT("immune");
    this->StopAnimationFrame = TEXT("stop");
}

