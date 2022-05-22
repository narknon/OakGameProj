#include "GFxMinimapWidget.h"

class UOakMinimapIconComponent;

void UGFxMinimapWidget::OnMinimapIconComponentEndTracking(UOakMinimapIconComponent* MinimapIconComponent) const {
}

void UGFxMinimapWidget::OnMinimapIconComponentBeginTracking(UOakMinimapIconComponent* MinimapIconComponent) const {
}

void UGFxMinimapWidget::OnHasMailChanged(bool bNewHasMail) const {
}

void UGFxMinimapWidget::OnFixedMinimapRotationChanged(bool bNewValue) const {
}

void UGFxMinimapWidget::OnCustomWaypointChanged(bool bDisplay, const FVector& WorldLocation) const {
}

void UGFxMinimapWidget::DeferredSetupForZoneMapViewer() const {
}

UGFxMinimapWidget::UGFxMinimapWidget() {
    this->AreaWaypointToClampIconCushion = 40.00f;
    this->NorthPseudoDistance = 3000.00f;
    this->BoundingRadius = 70.00f;
    this->BoundTriggeringRadius = 80.00f;
    this->ClampedIconPerfCutOff = 3000.00f;
    this->MaxMapWorldTransitionTime = 0.25f;
    this->MinimapIconPrefix = TEXT("mini");
    this->DefaultTexture = NULL;
    this->ClampedIconStage = NULL;
    this->ClampedSizeReference = NULL;
    this->MailNotification = NULL;
    this->NorthTextField = NULL;
    this->ZoneMapViewer = NULL;
    this->InitializationWrapper = NULL;
    this->MinimapTerrainObject = NULL;
    this->CurrentMinimapTexture = NULL;
    this->NextIconInstId = 0;
    this->NorthDegreeOffset = 0.00f;
    this->bFixedMinimapRotation = false;
    this->bNeedRefreshTrackedMissionIcons = false;
}

