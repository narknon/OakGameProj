#include "GFxBossBar.h"

class AOakCharacter;
class APawn;
class AActor;

void UGFxBossBar::UpdateEventDelegates() const {
}

void UGFxBossBar::UpdateActiveSelectionClips() const {
}

void UGFxBossBar::SetNewBossTarget(AOakCharacter* NewTarget) const {
}

void UGFxBossBar::SetFocusedBar(const FString& FocusedBarFrame) const {
}

void UGFxBossBar::PlayEventOnBossBar(AOakCharacter* BossBarCharacter, EBossbarEventType BossBarEvent) const {
}

void UGFxBossBar::OnPawnChanged(APawn* Pawn, APawn* OldPawn) const {
}

void UGFxBossBar::OnHealthTypeDepeleted(const FHealthTypeDepletedDetails& Details) const {
}

void UGFxBossBar::OnHealthTypeAdded(const FHealthType& HealthType, int32 Index) const {
}

void UGFxBossBar::OnBossDestroy(AActor* DestroyedActor) const {
}

void UGFxBossBar::HideAllSelectionClips() const {
}

void UGFxBossBar::HandleEventOnBossBar(const FBossbarEventData& EventData) const {
}

void UGFxBossBar::EnableBossBar() const {
}

void UGFxBossBar::DisableBossBar() const {
}

UGFxBossBar::UGFxBossBar() {
    this->Nameplate = NULL;
    this->OakGameState = NULL;
    this->BossDamageComponent = NULL;
    this->CachedBoss = NULL;
    this->NameplateBars = NULL;
    this->NameplateBarsID = TEXT("nameplateBars");
    this->PathToTopFocusableBar = TEXT("barArmor.barTopFocus");
    this->PathToMidFocusableBar = TEXT("barShield.barMidFocus");
    this->PathToBotFocusableBar = TEXT("barHealth.barBotFocus");
    this->FadeInSingle = TEXT("FadeInSingle");
    this->FadeInDouble = TEXT("FadeInDouble");
    this->FadeInTriple = TEXT("FadeInTriple");
    this->DeathAnimation = TEXT("death");
}

