#include "CameraBehavior_CollisionOffsetTrace.h"

UCameraBehavior_CollisionOffsetTrace::UCameraBehavior_CollisionOffsetTrace() {
    this->CollisionRadius = 10.00f;
    this->TraceOffsetZ = 0.00f;
    this->bUseAnchorAsStartLocation = false;
    this->bIgnoreChildToViewTarget = false;
    this->bIgnoreViewTargetAttachParent = false;
}

