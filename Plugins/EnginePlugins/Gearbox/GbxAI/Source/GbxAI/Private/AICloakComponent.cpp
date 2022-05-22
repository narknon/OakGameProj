#include "AICloakComponent.h"
#include "Net/UnrealNetwork.h"

class UAICloakData;

void UAICloakComponent::SetCloakData(UAICloakData* NewCloakData) {
}

void UAICloakComponent::OnRep_Cloaked() {
}

bool UAICloakComponent::IsPlayingAction() const {
    return false;
}

bool UAICloakComponent::IsCloakStateForced() const {
    return false;
}

bool UAICloakComponent::IsCloaked() const {
    return false;
}

void UAICloakComponent::InterruptCloakAction() {
}

UAICloakData* UAICloakComponent::GetCloakData() const {
    return NULL;
}

void UAICloakComponent::ForceUncloak(bool bInCanPlayActions) {
}

void UAICloakComponent::ForceCloak(bool bInCanPlayActions) {
}

void UAICloakComponent::ClearForcedState() {
}

void UAICloakComponent::ClearCloakData() {
}

void UAICloakComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAICloakComponent, RepData);
}

UAICloakComponent::UAICloakComponent() {
    this->DefaultCloakData = NULL;
    this->bRender = true;
    this->bCollide = true;
    this->bVisible = true;
    this->bTargetable = true;
    this->bGodMode = false;
    this->bDemigodMode = false;
    this->bAllowHitReactions = false;
    this->bOnlyMoveWhileCloaked = false;
    this->bCanCloakWithMovementHold = false;
    this->bCloakedOnSpawn = false;
    this->MinimumTransitionTime = 1.00f;
    this->CloakedStance = NULL;
    this->ActionCloak = NULL;
    this->ActionUncloak = NULL;
    this->bCloakAfterAction = false;
    this->bUncloakAfterAction = false;
    this->bCanInterruptActions = false;
    this->bLockActions = false;
    this->OverrideData = NULL;
    this->ActionComp = NULL;
    this->TargetableComp = NULL;
    this->NavComp = NULL;
    this->MoveComp = NULL;
    this->StanceComp = NULL;
    this->DamageComp = NULL;
}

