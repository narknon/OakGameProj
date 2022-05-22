#include "VehicleFeedbackEffect.h"

UVehicleFeedbackEffect::UVehicleFeedbackEffect() {
    this->FeedbackData = NULL;
    this->FeedbackScale = 1.00f;
    this->bLoop = false;
    this->bLocalOnly = false;
    this->bStopFeedback = false;
}

