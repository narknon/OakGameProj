#include "OakDialogSettings.h"

UOakDialogSettings::UOakDialogSettings() {
    this->TargetParam = NULL;
    this->InstigatorParam = NULL;
    this->MaxItemCalloutDistance = 1536.00f;
    this->EchoLogStyle = NULL;
    this->DryFireCalloutEvent = NULL;
    this->PlayerIdleTime = 30.00f;
    this->PlayerIdleCallout = NULL;
    this->SpottedEnemyCallout = NULL;
    this->PlayerAlertEvent = NULL;
    this->PlayerAlertType = NULL;
    this->VehicleSpawnedEvent = NULL;
    this->VehicleSwappedSeatEvent = NULL;
}

