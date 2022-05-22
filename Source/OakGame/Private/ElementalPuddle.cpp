#include "ElementalPuddle.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "ProceduralMeshComponent.h"
#include "ElementalPuddleOverlapCollisonComponent.h"
#include "ElementalInteractionComponent.h"

class UObject;
class UElementalPuddleConfigurationData;
class AElementalPuddle;
class UElementalPuddleSimpleSpawnData;
class UElementalPuddleSpawnData;
class AActor;
class APawn;

AElementalPuddle* AElementalPuddle::SpawnElementalPuddle(UObject* WorldContextObject, TSubclassOf<AElementalPuddle> PuddleClass, FTransform SpawnTransform, const UElementalPuddleConfigurationData* PuddleConfiguration, const UElementalPuddleSpawnData* PuddleSpawnData, float AutoAlignTraceDistance, AActor* SpawnOwner, float OverrideFullSizeScale, APawn* OverrideInstigator) {
    return NULL;
}

AElementalPuddle* AElementalPuddle::SimpleSpawnElementalPuddle(UObject* WorldContextObject, const UElementalPuddleSimpleSpawnData* SimpleSpawnData, FTransform SpawnTransform, AActor* SpawnOwner, APawn* OverrideInstigator) {
    return NULL;
}

void AElementalPuddle::OnRep_CleanUpDuration() {
}

void AElementalPuddle::K2_CleanUpPuddle(float CleanUpTime) {
}

void AElementalPuddle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElementalPuddle, ElementalPuddleConfiguration);
    DOREPLIFETIME(AElementalPuddle, PuddleState);
    DOREPLIFETIME(AElementalPuddle, bWasSpawned);
    DOREPLIFETIME(AElementalPuddle, OverrideTraceDistance);
    DOREPLIFETIME(AElementalPuddle, SpawnTransitionTime);
    DOREPLIFETIME(AElementalPuddle, InitialOpacity);
    DOREPLIFETIME(AElementalPuddle, InitialScale);
    DOREPLIFETIME(AElementalPuddle, FullSizeOpacity);
    DOREPLIFETIME(AElementalPuddle, FullSizeScale);
    DOREPLIFETIME(AElementalPuddle, CleanUpOpacity);
    DOREPLIFETIME(AElementalPuddle, CleanUpScale);
    DOREPLIFETIME(AElementalPuddle, ReplicatedCleanUpDuration);
}

AElementalPuddle::AElementalPuddle() {
    this->ElementalInteractionManager = NULL;
    this->PuddleCollision = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("PuddleCollision"));
    this->PuddleCollisionSurfaceArea = 0.00f;
    this->PuddleOverlapProbeSphereRadius = 2.00f;
    this->PuddleOverlapCollision = CreateDefaultSubobject<UElementalPuddleOverlapCollisonComponent>(TEXT("PuddleOverlapCollision"));
    this->ElementalInteraction = CreateDefaultSubobject<UElementalInteractionComponent>(TEXT("ElementalInteraction"));
    this->BalanceState = NULL;
    this->VisualComponent = NULL;
    this->ElementalPuddleConfiguration = NULL;
    this->PuddleState = EPuddleState::Idle;
    this->AudioComponent = NULL;
    this->CurrentOpacity = 1.00f;
    this->CurrentScale = 1.00f;
    this->bOverrideColor = false;
    this->bEnableRipples = false;
    this->bOverrideNormalStrength = false;
    this->bOverrideMovementSpeed = false;
    this->RipplesStrength = 1.00f;
    this->RipplesSize = 600.00f;
    this->RipplesSpeed = 0.05f;
    this->NormalStrength = 0.00f;
    this->MovementSpeed = 0.00f;
    this->bWasSpawned = false;
    this->OverrideTraceDistance = -1.00f;
    this->SpawnTransitionTime = 1.00f;
    this->InitialOpacity = 0.00f;
    this->InitialScale = 0.00f;
    this->FullSizeOpacity = 1.00f;
    this->FullSizeScale = 1.00f;
    this->LifeTime = 5.00f;
    this->CleanUpTransitionTime = 2.00f;
    this->CleanUpOpacity = 0.00f;
    this->CleanUpScale = 0.00f;
    this->ReplicatedCleanUpDuration = 0.00f;
    this->NavObstacle = NULL;
    this->ParticleSystem = NULL;
}

