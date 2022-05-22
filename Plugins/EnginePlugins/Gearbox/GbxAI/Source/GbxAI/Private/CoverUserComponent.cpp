#include "CoverUserComponent.h"
#include "Net/UnrealNetwork.h"

class UGbxCoverTransitionTable;
class ACharacter;
class UCoverStyleData;

void UCoverUserComponent::SetEnterTransitionTable(UGbxCoverTransitionTable* NewTable) {
}

void UCoverUserComponent::OnRep_ClientData() {
}

void UCoverUserComponent::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

UCoverStyleData* UCoverUserComponent::GetStyle() const {
    return NULL;
}

void UCoverUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCoverUserComponent, ClientData);
}

UCoverUserComponent::UCoverUserComponent() {
    this->State = ECoverUserState::NotInCover;
    this->DesiredState = ECoverUserState::NotInCover;
    this->SkelMeshComponent = NULL;
    this->GbxCharacter = NULL;
    this->GbxAIController = NULL;
    this->DamageComponent = NULL;
    this->GbxNavComponent = NULL;
    this->StanceComponent = NULL;
    this->TargetingComponent = NULL;
    this->WeaponUserComponent = NULL;
    this->MovementComponent = NULL;
    this->bFlanked = false;
    this->MaxVerticalNavDistance = 50.00f;
    this->MaxHorizontalNavDistance = 50.00f;
    this->MaxDeltaLocationThreshold = 5.00f;
    this->MaxDeltaRotationThreshold = 1.00f;
    this->ExitInterpSearchDistance = 500.00f;
    this->TransitionBetweenTraceHeight = 250.00f;
    this->WidthAdjustment = 0.00f;
    this->HeightAdjustment = 0.00f;
    this->bDisableFootIk = false;
    this->FireToIdleStates.AddDefaulted(2);
    this->HitReactionLayer = NULL;
    this->TransitionBlendTime = 0.20f;
    this->NearCoverDistance = 750.00f;
    this->EnterTransitionTable = NULL;
    this->BetweenTransitionTable = NULL;
}

