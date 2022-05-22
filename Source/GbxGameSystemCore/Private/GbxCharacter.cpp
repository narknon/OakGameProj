#include "GbxCharacter.h"
#include "Net/UnrealNetwork.h"
#include "GbxCharacterMovementComponent.h"
#include "TargetableComponent.h"
#include "GameplayTagContainerComponent.h"
#include "DamageComponent.h"
#include "DamageCauserComponent.h"
#include "GbxActionComponent.h"
#include "DynamicPhysicalAnimationComponent.h"
#include "GbxSkeletalMeshComponent.h"

class UTeam;
class UCharacterSoundTag;
class UBlackboardComponent;
class AGbxCharacter;
class UBlackboardData;
class UGbxUIName;
class UTeamComponent;
class AGbxPlayerController;
class ULandingData;
class UTargetingComponent;
class UGbxPerceptionComponent;
class UPawnAttachSlotComponent;
class AActor;
class USkeletalMeshComponent;
class UFirstPersonComponent;
class USceneComponent;

void AGbxCharacter::SetTeam(UTeam* Team) const {
}

void AGbxCharacter::SetPlayerMaster(AGbxCharacter* NewPlayerMaster) {
}

void AGbxCharacter::SetCharacterUIName(const UGbxUIName* NewCharacterUIName) {
}

void AGbxCharacter::SetCharacterNameFromString(const FString& NewCharacterName) {
}

void AGbxCharacter::SetCharacterName(const FText& NewCharacterName) {
}

void AGbxCharacter::RotateCharacterTo(FRotator TargetRotation, float Duration, TEnumAsByte<EEasingFunc::Type> Easing) {
}

void AGbxCharacter::ReceiveOwnerPlayerControllerChanged_Implementation(AGbxPlayerController* NewPlayerControllerOwner) {
}

void AGbxCharacter::OnRep_ReplicatedPawnAttachState() {
}


void AGbxCharacter::NetMulticast_TriggerHitReactionSound_Implementation(const UCharacterSoundTag* Tag) {
}

void AGbxCharacter::NetMulticast_PlayLanded_Implementation(const FHitResult& Hit, float ImpactSpeed, bool bLandFromJump, ULandingData* LandingDataOverride) {
}

void AGbxCharacter::NetMulticast_PlayJumped_Implementation() {
}

bool AGbxCharacter::IsZoomed() const {
    return false;
}

UTeamComponent* AGbxCharacter::GetTeamComponent() const {
    return NULL;
}

UTeam* AGbxCharacter::GetTeam() const {
    return NULL;
}

UTargetingComponent* AGbxCharacter::GetTargetingComponent() const {
    return NULL;
}

UTargetableComponent* AGbxCharacter::GetTargetableComponent() const {
    return NULL;
}

UGbxPerceptionComponent* AGbxCharacter::GetPerceptionComponent() const {
    return NULL;
}

EPawnAttachStatus AGbxCharacter::GetPawnAttachStatus() const {
    return EPawnAttachStatus::Unoccupied;
}

UPawnAttachSlotComponent* AGbxCharacter::GetPawnAttachComponent() const {
    return NULL;
}

AActor* AGbxCharacter::GetPawnAttachActor() const {
    return NULL;
}

FVector AGbxCharacter::GetLookAtLocation(float& OutWeight) const {
    return FVector{};
}

float AGbxCharacter::GetLookAt(FVector& HeadLocation, FVector& EyeLocation, float& HeadWeight) const {
    return 0.0f;
}

USkeletalMeshComponent* AGbxCharacter::GetFirstPersonMesh() const {
    return NULL;
}

UFirstPersonComponent* AGbxCharacter::GetFirstPersonComponent() const {
    return NULL;
}

UBlackboardComponent* AGbxCharacter::GetBlackboardComponent() const {
    return NULL;
}

UBlackboardData* AGbxCharacter::GetBlackboardAsset() const {
    return NULL;
}

void AGbxCharacter::GetAvailableSocketNames(TArray<FName>& Array) const {
}

FVector AGbxCharacter::GetAimVectorStartLocation() const {
    return FVector{};
}

FRotator AGbxCharacter::GetAimOffset() const {
    return FRotator{};
}

UFirstPersonComponent* AGbxCharacter::FindFirstPersonComponent() const {
    return NULL;
}

void AGbxCharacter::DetachCharacter(EDetachmentRule LocationRule) {
}

void AGbxCharacter::ClientRotateCharacterTo_Implementation(FRotator TargetRotation, float Duration, TEnumAsByte<EEasingFunc::Type> Easing) {
}

void AGbxCharacter::CauseEveryoneToForgetMe() {
}

void AGbxCharacter::AttachCharacterToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
}

void AGbxCharacter::AttachCharacterToActor(AActor* ParentActor, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
}

void AGbxCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGbxCharacter, ReplicatedPawnAttachState);
    DOREPLIFETIME(AGbxCharacter, FacingController);
    DOREPLIFETIME(AGbxCharacter, ClientTurnDelta);
}

AGbxCharacter::AGbxCharacter() {
    this->GbxCharacterMovement = CreateDefaultSubobject<UGbxCharacterMovementComponent>(TEXT("CharMoveComp"));
    this->TargetableComponent = CreateDefaultSubobject<UTargetableComponent>(TEXT("TargetableComponent"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DefaultDamageComponent"));
    this->DamageCauserComponent = CreateDefaultSubobject<UDamageCauserComponent>(TEXT("DefaultDamageCauserComponent"));
    this->GbxAction = CreateDefaultSubobject<UGbxActionComponent>(TEXT("GbxAction"));
    this->GameplayTagContainerComponent = CreateDefaultSubobject<UGameplayTagContainerComponent>(TEXT("DefaultGameplayTagContainerComponent"));
    this->DynamicPhysicalAnimationComponent = CreateDefaultSubobject<UDynamicPhysicalAnimationComponent>(TEXT("DynamicPhysicalAnimationComponent"));
    this->TargetingComponent = NULL;
    this->PerceptionComponent = NULL;
    this->FirstPersonComponent = NULL;
    this->LandingData = NULL;
    this->JumpedImpact = NULL;
    this->bPlayJumpAndLandImpactsOnAllFeet = false;
    this->FootstepImpact = NULL;
    this->GenericHandImpact = NULL;
    this->LadderHandImpact = NULL;
    this->OwnerPlayerController = NULL;
    this->OwnerAIController = NULL;
    this->PlayerMaster = NULL;
    this->GbxMesh = CreateDefaultSubobject<UGbxSkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->bOrientEyeHeight = false;
    this->ViewSocketComponent = NULL;
    this->BaseAimHeight = 32.00f;
    this->bUseCustomBaseAimHeight = false;
    this->AimHeightFromGround = 0.00f;
    this->CrouchedAimHeight = 16.00f;
    this->bUseCustomCrouchedAimHeight = false;
    this->AimEyeHeightPct = 0.50f;
    this->AimSocketComponent = NULL;
    this->ClientTurnDelta = 0;
    this->InputComponentClass = NULL;
    this->GestaltFoleyAccessory = NULL;
    this->CachedFoleyMainComponent = NULL;
    this->GameplayTasksComponent = NULL;
    this->LevelSequencePlayerController = NULL;
    this->AnimGraphBoneSetFilter = NULL;
    this->SmartObjectBoneSetFilter = NULL;
    this->DefaultBoneSetFilter = NULL;
    this->ActionBoneSetFilter = NULL;
    this->bPauseAIWhileFalling = true;
}

