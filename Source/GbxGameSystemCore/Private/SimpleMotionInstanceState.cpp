#include "SimpleMotionInstanceState.h"

FSimpleMotionInstanceState::FSimpleMotionInstanceState() {
    this->Speed = 0.00f;
    this->bMotionReversed = false;
    this->bReachedTarget = false;
    this->bReachedMaxSpeed = false;
    this->bInTransition = false;
}

