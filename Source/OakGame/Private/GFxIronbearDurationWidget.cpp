#include "GFxIronbearDurationWidget.h"

UGFxIronbearDurationWidget::UGFxIronbearDurationWidget() {
    this->WarningFlourishThreshold = 0.30f;
    this->HardPointDeltaEpsilon = 0.01f;
    this->IronBearAbility = NULL;
    this->DurationBar = NULL;
    this->FuelAnimWrapper = NULL;
    this->FuelLabel = NULL;
    this->BorderAnimWrapper = NULL;
}

