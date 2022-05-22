#include "GbxNavAvoidanceOptions.h"

FGbxNavAvoidanceOptions::FGbxNavAvoidanceOptions() {
    this->bAvoidanceSteering = false;
    this->bAvoidanceObstacle = false;
    this->bAvoidPawnsBehindMe = false;
    this->bAvoidWithNoGoal = false;
}

