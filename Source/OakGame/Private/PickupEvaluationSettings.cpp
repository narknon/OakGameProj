#include "PickupEvaluationSettings.h"

FPickupEvaluationSettings::FPickupEvaluationSettings() {
    this->MinEvaluationHeight = 0.00f;
    this->EvaluationWidth = 0.00f;
    this->BoxExtentZFactor = 0.00f;
    this->SelectedWidthBoost = 0.00f;
    this->SelectedHeightBoost = 0.00f;
    this->SelectedBoxZFactorBoost = 0.00f;
    this->SelectedBoxZFactorBoost_Attached = 0.00f;
    this->AttachedPickupPreferredBoxMaxHeight = 0.00f;
    this->AttachedPickupTracedMeshPriorityBoost = 0.00f;
    this->PickupStickiness = 0.00f;
    this->MinLookAtTolerance = 0.00f;
    this->SkipVisibilityTraceTestRange = 0.00f;
    this->ItemCardBottomPickupOffset = 0.00f;
    this->ItemCardUpperLootBeamHeight = 0.00f;
}

