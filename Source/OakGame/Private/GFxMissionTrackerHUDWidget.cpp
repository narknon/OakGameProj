#include "GFxMissionTrackerHUDWidget.h"
#include "Templates/SubclassOf.h"

class UMission;

void UGFxMissionTrackerHUDWidget::UpdateTracker(TSubclassOf<UMission> TrackedMission) const {
}

void UGFxMissionTrackerHUDWidget::SetTrackerAfterDelay() const {
}

void UGFxMissionTrackerHUDWidget::OnMissionActivatedCheatStop() const {
}

void UGFxMissionTrackerHUDWidget::OnMissionActivatedCheatStart() const {
}

void UGFxMissionTrackerHUDWidget::OnInputDeviceChanged() const {
}

void UGFxMissionTrackerHUDWidget::extRewardPanelFadeOutFinished() const {
}

UGFxMissionTrackerHUDWidget::UGFxMissionTrackerHUDWidget() {
    this->NewMissionNotificationAsset = NULL;
    this->MissionCompletedNotificationAsset = NULL;
    this->MaxTimeTillReturnToTrackedMission = 1.00f;
    this->MissionActivateCheatSuppressionDuration = 2.00f;
    this->MaxNormalRewardsDisplayTime = 5.00f;
    this->MaxBonusRewardsDisplayTime = 3.00f;
    this->TempTrackedMission = NULL;
    this->MissionTracker = NULL;
    this->TaskContainer = NULL;
    this->MissionTrackerContainerInner = NULL;
    this->MoneyCurrency = NULL;
    this->EridiumCurrency = NULL;
    this->CachedMissionObjectiveSet = NULL;
    this->CurrentTimerFieldSlot = NULL;
    this->CurrentProgressBarSlot = NULL;
}

