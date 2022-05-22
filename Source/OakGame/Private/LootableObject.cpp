#include "LootableObject.h"
#include "Net/UnrealNetwork.h"
#include "UsableComponent.h"

void ALootableObject::OnUsedBy(const FUseEvent& UseEvent) {
}

void ALootableObject::OnRep_AnimState() {
}


void ALootableObject::DoLootSpawning() {
}

void ALootableObject::DisassociateSpawnedLootFromThis() {
}

void ALootableObject::ClearCurrentInteractionResponse() {
}

void ALootableObject::ChangeBalanceTableRow(const FDataTableRowHandle& NewBalanceTableRow) {
}

void ALootableObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALootableObject, AnimState);
    DOREPLIFETIME(ALootableObject, CustomResponseIdx);
}

ALootableObject::ALootableObject() {
    this->LootDefinition = NULL;
    this->SpawnLootTiming = ELootSpawnTiming::OnEnabled;
    this->ShouldAttachLoot = true;
    this->bMaintainStateAcrossMapLoads = false;
    this->bOptOutOfLevelPersistence = false;
    this->bOpenInResponseToDamage = false;
    this->bUseOverlapEventsIfDamageable = true;
    this->bSimulatePhysicsAfterOpening = false;
    this->DelayBeforeSimulatePhysics = 0.00f;
    this->bIsBonePile = false;
    this->bUseMeshSwap = false;
    this->bSearchableByEQS = false;
    this->bControlledByMissionPickupObjective = false;
    this->MissionDrivenType = EMissionDrivenLootableType::None;
    this->OpenedCondition = NULL;
    this->ClosedCondition = NULL;
    this->UsableComponent = CreateDefaultSubobject<UUsableComponent>(TEXT("UsableComponent"));
    this->PlayerThatOpenedMe = NULL;
    this->OpenReason = ELootableOpenReason::Use;
    this->OpeningDamageSource = NULL;
    this->MeshComponent = NULL;
    this->LootableComponent = NULL;
    this->MissionIconComponent = NULL;
    this->MissionObserverComponent = NULL;
    this->CustomResponseIdx = -1;
}

