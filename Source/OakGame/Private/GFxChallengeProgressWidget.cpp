#include "GFxChallengeProgressWidget.h"
#include "Templates/SubclassOf.h"

class UChallengesComponent;
class UChallenge;

void UGFxChallengeProgressWidget::OnInputDeviceChanged() const {
}

void UGFxChallengeProgressWidget::OnChallengeUpdated(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass, int32 NewValue, bool bDisplayNotification, bool bCompleted) const {
}

void UGFxChallengeProgressWidget::OnChallengeCompleted(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass) const {
}

void UGFxChallengeProgressWidget::OnChallengeChildCompleted(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass) const {
}

void UGFxChallengeProgressWidget::OnChallengeActivated(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass) const {
}

void UGFxChallengeProgressWidget::extOnUpdateThingComplete(const FString& Thing) const {
}

void UGFxChallengeProgressWidget::extOnUpdateThing(const FString& Thing) const {
}

void UGFxChallengeProgressWidget::extOnRolloutComplete() const {
}

void UGFxChallengeProgressWidget::extOnRollOnComplete() const {
}

UGFxChallengeProgressWidget::UGFxChallengeProgressWidget() {
    this->WidgetDuration = 5.00f;
    this->DelayToThingTransitions = 1.00f;
    this->MaxWidgetRolloutTime = 5.00f;
    this->ChallengeCompleteText = FText::FromString(TEXT("COMPLETE!"));
    this->WidgetState = EGFxChallegeProgressWidgetState::Off;
    this->WidgetStateTime = 0.00f;
    this->bHasStartedThingTransitions = false;
    this->WidgetWrapper = NULL;
    this->Widget = NULL;
    this->LabelText = NULL;
    this->BodyText = NULL;
    this->ProgressBarClip = NULL;
    this->ProgressText = NULL;
    this->TypeIconClip = NULL;
    this->ScanlinesClip = NULL;
    this->bBlockedByTutorial = false;
}

