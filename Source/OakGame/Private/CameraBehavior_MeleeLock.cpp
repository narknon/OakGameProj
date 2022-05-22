#include "CameraBehavior_MeleeLock.h"

UCameraBehavior_MeleeLock::UCameraBehavior_MeleeLock() {
    this->LockedTarget = NULL;
    this->MaxLockDistance = 0.00f;
    this->MaxHorizontalLockAngle = 0.00f;
    this->MaxVerticalLockAngle = 0.00f;
    this->LockBreakDistance = 0.00f;
    this->LockSpeed = 0.00f;
}

