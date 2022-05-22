#include "GbxReachabilityTracker.h"

FGbxReachabilityTracker::FGbxReachabilityTracker() {
    this->GbxNavWorld = NULL;
    this->CachedSourceRoot = NULL;
    this->CachedGoalRoot = NULL;
}

