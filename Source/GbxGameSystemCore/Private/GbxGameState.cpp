#include "GbxGameState.h"
#include "Net/UnrealNetwork.h"

class UParticleSystem;
class UObject;
class USceneComponent;
class AActor;
class UImpactData;
class UHitRegionData;

void AGbxGameState::SpawnEmitterAtLocationMulticastImpl_Implementation(UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, UObject* ParameterEvaluationContext) const {
}

void AGbxGameState::SpawnEmitterAtLocationMulticast(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, UObject* ParameterEvaluationContext) {
}

void AGbxGameState::SpawnEmitterAtComponentSocketMulticast(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, USceneComponent* Component, FName Socket, bool bAutoDestroy, UObject* ParameterEvaluationContext) {
}

void AGbxGameState::SpawnEmitterAtActorSocketMulticast(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, AActor* Actor, FName Socket, bool bAutoDestroy, UObject* ParameterEvaluationContext) {
}

void AGbxGameState::PlayImpactMulticast_Implementation(const UImpactData* ImpactData, AActor* ImpactInstigator, const FReplicatedImpactHitResult& HitResult, const FImpactResponseParams& ResponseParams) {
}

void AGbxGameState::PlayHitRegionImpactMulticast_Implementation(const UHitRegionData* HitRegion, AActor* ImpactInstigator, const FReplicatedImpactHitResult& HitResult) {
}

void AGbxGameState::OnRep_StatsManager() {
}

void AGbxGameState::OnRep_HostPlayerState() {
}

void AGbxGameState::OnRep_GameInstanceTime() {
}

void AGbxGameState::OnRep_GameInstanceId() {
}

void AGbxGameState::OnRep_bPlayersOnly() {
}

void AGbxGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGbxGameState, StatsManager);
    DOREPLIFETIME(AGbxGameState, HostPlayerState);
    DOREPLIFETIME(AGbxGameState, GameInstanceId);
    DOREPLIFETIME(AGbxGameState, GameInstanceTime);
    DOREPLIFETIME(AGbxGameState, bRepPlayersOnly);
}

AGbxGameState::AGbxGameState() {
    this->ChallengeManager = NULL;
    this->StatsManager = NULL;
    this->CustomizationManager = NULL;
    this->HostPlayerState = NULL;
    this->ImpactDecalManager = NULL;
    this->GameInstanceTime = 0.00f;
    this->GameInstanceTimeUpdateRate = 2.00f;
    this->CustomizationManagerClass = NULL;
    this->bRepPlayersOnly = false;
}

