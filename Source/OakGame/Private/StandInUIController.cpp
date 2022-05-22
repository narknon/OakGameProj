#include "StandInUIController.h"

FStandInUIController::FStandInUIController() {
    this->VerticalSplitInVehicleAdjustment = 0.00f;
    this->OuterObject = NULL;
    this->PlayerController = NULL;
    this->StandInContainer = NULL;
    this->StandInTransformRoot = NULL;
    this->CurrentStandInActor = NULL;
    this->TempInventoryActor = NULL;
    this->StandInTemplateInventoryBalanceState = NULL;
    this->WantedStreamRequest = 0;
}

