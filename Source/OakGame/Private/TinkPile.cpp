#include "TinkPile.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"
#include "OakSpawnPointComponent.h"
#include "OakSpawnerComponent.h"
#include "RegionBalanceStateComponent.h"
#include "TerritoryComponent.h"

class AActor;
class UTeam;
class USpawnerComponent;

void ATinkPile::StartUsing(AActor* User) {
}

void ATinkPile::SetTeam(UTeam* NewTeam) {
}

void ATinkPile::SetStartState(ETinkPileBuildOption NewStartState) {
}

void ATinkPile::SetEnabled(bool bNewEnabled) {
}

void ATinkPile::SetBuildOption(ETinkPileBuildOption NewBuildOption) {
}

void ATinkPile::ResetUse() {
}



void ATinkPile::OnRep_UseState() {
}

void ATinkPile::OnActorSpawned(USpawnerComponent* SpawnerComp, AActor* Actor) {
}

void ATinkPile::OnActorDied(USpawnerComponent* SpawnerComp, AActor* Actor) {
}

ETinkPileUseState ATinkPile::GetUseState() const {
    return ETinkPileUseState::None;
}

void ATinkPile::BuildObject() {
}

void ATinkPile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATinkPile, UseState);
}

ATinkPile::ATinkPile() {
    this->SpawnerComponent = CreateDefaultSubobject<UOakSpawnerComponent>(TEXT("SpawnerComponent"));
    this->SpawnPointComponent = CreateDefaultSubobject<UOakSpawnPointComponent>(TEXT("SpawnPointComponent"));
    this->SkelMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkelMeshComponent"));
    this->RegionComponent = CreateDefaultSubobject<URegionBalanceStateComponent>(TEXT("RegionComponent"));
    this->TerritoryComponent = CreateDefaultSubobject<UTerritoryComponent>(TEXT("TerritoryComponent"));
    this->bEnabled = true;
    this->StartState = ETinkPileBuildOption::None;
    this->DefaultTeam = NULL;
    this->Anim_UnusedIdle = NULL;
    this->Anim_UsedIdle = NULL;
    this->Anim_Reset = NULL;
    this->CurrentTeam = NULL;
    this->UseState = ETinkPileUseState::None;
    this->CurrentAIOwner = NULL;
}

