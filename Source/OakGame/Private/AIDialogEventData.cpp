#include "AIDialogEventData.h"

UAIDialogEventData::UAIDialogEventData() {
    this->TargetAcquiredEvent = NULL;
    this->TargetLostEvent = NULL;
    this->TargetKilledOneEnemyTargetEvent = NULL;
    this->TargetDownEvent = NULL;
    this->TargetDeadEvent = NULL;
    this->ShootingEvent = NULL;
    this->ReloadEvent = NULL;
    this->ReinforcementsEvent = NULL;
    this->TargetParam = NULL;
    this->InstigatorParam = NULL;
    this->MethodOfDeathParam = NULL;
    this->ActionSkillDamageSourceClass = NULL;
    this->MethodOfDeath_Normal = NULL;
    this->MethodOfDeath_Gibbed = NULL;
    this->MethodOfDeath_ActionSkill = NULL;
    this->NpcGreetingHelloEvent = NULL;
    this->NpcGreetingHelloMissionEvent = NULL;
    this->NpcGreetingIdleEvent = NULL;
    this->NpcGreetingGoodbyeEvent = NULL;
    this->NpcGreetingTargetParam = NULL;
}

