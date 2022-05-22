#include "AnimNotify_GbxCustomEvent.h"

UAnimNotify_GbxCustomEvent::UAnimNotify_GbxCustomEvent() {
    this->EventContext = EGbxCustomEventContext::Owner;
    this->bRunOnServer = true;
    this->bRunOnClient = false;
    this->bRunIfLocalPlayer = false;
    this->bTriggerOnFirstPersonMesh = false;
}

