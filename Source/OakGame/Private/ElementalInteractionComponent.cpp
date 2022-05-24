#include "ElementalInteractionComponent.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;
class UElementalInteractionConfigurationData;
class AActor;
class UElementalInteractionData;
class AController;

void UElementalInteractionComponent::SetElementalInteractionMode(EElementalInteractionMode NewInteractionMode) {
}

void UElementalInteractionComponent::SetElementalInteractionConfiguration(const UElementalInteractionConfigurationData* ElementalInteractionConfigurationData) {
}

void UElementalInteractionComponent::OnRep_PendingStateData() {
}

void UElementalInteractionComponent::OnRep_PendingState() {
}

void UElementalInteractionComponent::OnRep_CurrentState() {
}

void UElementalInteractionComponent::OnEndInteractionOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UElementalInteractionComponent::OnEndDamageOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UElementalInteractionComponent::OnBeginInteractionOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UElementalInteractionComponent::OnBeginDamageOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UElementalInteractionComponent::NotifySourceDurationEnded() {
}

void UElementalInteractionComponent::K2_BeginInteraction(UElementalInteractionData* NewState, bool bInIsSource, float SourceDuration, AController* NewInstigatorController) {
}

bool UElementalInteractionComponent::IsInElementalState(UElementalInteractionData* State) const {
    return false;
}

void UElementalInteractionComponent::ComputeEffectSize(EElementalEffectSizeComputationType EffectSizeComputationType, const float EffectSizeScale) {
}

void UElementalInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UElementalInteractionComponent, CurrentState);
    DOREPLIFETIME(UElementalInteractionComponent, PendingState);
    DOREPLIFETIME(UElementalInteractionComponent, PendingStateHitLocation);
    DOREPLIFETIME(UElementalInteractionComponent, TransitionPercent);
}

UElementalInteractionComponent::UElementalInteractionComponent() {
    this->InteractionMode = EElementalInteractionMode::Default;
    this->bIgnoreDamage = false;
    this->NaturalState = NULL;
    this->InitialState = NULL;
    this->bIsInitiallySource = false;
    this->InitialSourceDuration = 0.00f;
    this->ElementalInteractionManager = NULL;
    this->InstigatorController = NULL;
    this->CurrentState = NULL;
    this->bIsSource = false;
    this->PendingState = NULL;
    this->ClosestSourceComponent = NULL;
    this->TransitionPercent = 0.00f;
    this->bUseDamagePrimitives = false;
    this->bUseInteractionPrimitives = false;
    this->bInheritTeamFromOwner = false;
    this->Team = NULL;
    this->bForceDamageToPlayerControlled = false;
    this->bHasElementalEffects = false;
    this->EffectAudioComponent = NULL;
    this->bCustomEffectSize = false;
    this->EffectSize = 0.00f;
}

