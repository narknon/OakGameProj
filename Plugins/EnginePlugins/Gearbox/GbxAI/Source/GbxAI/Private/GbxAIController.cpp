#include "GbxAIController.h"
#include "AIActionComponent.h"
#include "AIUseComponent.h"
#include "GbxNavComponent.h"

class UTargetingComponent;
class UTeamComponent;
class UBlackboardData;
class UTerritoryComponent;
class UTeam;
class UAIWeaponUserComponent;
class UGbxActionComponent;
class AActor;
class UTargetableComponent;
class USpawnerComponent;
class ASpawner;
class UAIPerceptionComponent;
class UBlackboardComponent;
class UGbxCharacterMovementComponent;
class UAIGroupState;
class AGbxCharacter;
class ACharacter;

void AGbxAIController::SetTerritory(UTerritoryComponent* Territory) {
}

void AGbxAIController::SetTeam(UTeam* Team) const {
}

void AGbxAIController::SetObstacleAvoidanceLock(bool bDisable, const FName& Reason) {
}

void AGbxAIController::ResetTerritoryToDefault() {
}

void AGbxAIController::OnMyWeaponHitSomething(AActor* HitActor, FVector HitLocation) {
}

UAIWeaponUserComponent* AGbxAIController::GetWeaponUserComponent() const {
    return NULL;
}

UAIUseComponent* AGbxAIController::GetUseComponent() const {
    return NULL;
}

UTerritoryComponent* AGbxAIController::GetTerritory() const {
    return NULL;
}

UTeamComponent* AGbxAIController::GetTeamComponent() const {
    return NULL;
}

UTeam* AGbxAIController::GetTeam() const {
    return NULL;
}

UTargetingComponent* AGbxAIController::GetTargetingComponent() const {
    return NULL;
}

UTargetableComponent* AGbxAIController::GetTargetableComponent() const {
    return NULL;
}

USpawnerComponent* AGbxAIController::GetSpawnerComponent() const {
    return NULL;
}

ASpawner* AGbxAIController::GetSpawner() const {
    return NULL;
}

UAIPerceptionComponent* AGbxAIController::GetPerceptionComponent() const {
    return NULL;
}

int32 AGbxAIController::GetNumChildActors() const {
    return 0;
}

UGbxNavComponent* AGbxAIController::GetNavComponent() const {
    return NULL;
}

UGbxCharacterMovementComponent* AGbxAIController::GetMovementComponent() const {
    return NULL;
}

UAIGroupState* AGbxAIController::GetGroupState() const {
    return NULL;
}

AGbxCharacter* AGbxAIController::GetGbxCharacter() const {
    return NULL;
}

UGbxActionComponent* AGbxAIController::GetGbxActionComponent() const {
    return NULL;
}

TArray<AActor*> AGbxAIController::GetChildActors() const {
    return TArray<AActor*>();
}

UBlackboardComponent* AGbxAIController::GetBlackboardComponent() const {
    return NULL;
}

UBlackboardData* AGbxAIController::GetBlackboardAsset() const {
    return NULL;
}

int32 AGbxAIController::GetAIGroupSize() const {
    return 0;
}

void AGbxAIController::GetAIGroupList(TArray<AActor*>& AIGroupList, bool bIncludeSelf, float InRadius) const {
}

UAIActionComponent* AGbxAIController::GetAIActionComponent() const {
    return NULL;
}

void AGbxAIController::ChildDestroyed(AActor* DestroyedActor) {
}

void AGbxAIController::CheckPauseWhileFalling(ACharacter* TheCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void AGbxAIController::AddChildActors(const TArray<AActor*>& NewChildren) {
}

void AGbxAIController::AddChildActor(AActor* NewChild) {
}

AGbxAIController::AGbxAIController() {
    this->GbxCharacter = NULL;
    this->MovementComponent = NULL;
    this->TargetingComponent = NULL;
    this->TargetableComponent = NULL;
    this->TeamComponent = NULL;
    this->AIActionComponent = CreateDefaultSubobject<UAIActionComponent>(TEXT("AIActionComponent"));
    this->DefaultTerritory = NULL;
    this->CurrentTerritory = NULL;
    this->SpawnerComponent = NULL;
    this->GbxNavComponent = CreateDefaultSubobject<UGbxNavComponent>(TEXT("GbxNavComponent"));
    this->AIUseComponent = CreateDefaultSubobject<UAIUseComponent>(TEXT("AIUseComponent"));
    this->GbxActionComponent = NULL;
    this->LevelSequencePlayerController = NULL;
}

