#include "AIAspectSettings_Timer.h"

FAIAspectSettings_Timer::FAIAspectSettings_Timer() {
    this->bUseCanStartWarmup = false;
    this->bUseSpawnedWarmup = false;
    this->bUseCombatStartedWarmup = false;
    this->bUseTargetChangedWarmup = false;
    this->bUseSucceededCooldown = false;
    this->bUseFailedCooldown = false;
    this->bUseAbortedCooldown = false;
    this->bUseSucceedTimeLimit = false;
    this->bUseFailTimeLimit = false;
}

