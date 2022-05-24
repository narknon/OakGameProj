#include "Grenade.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "WwiseAudioComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "GrenadeProjectileMovementComponent.h"

class UGrenadeBehavior;
class AActor;
class UGrenadeBehavior_Payload;
class AGrenade;
class UWwiseEvent;
class UParticleSystem;
class UParticleSystemComponent;
class UGrenadeHomingComponent;
class UDrunkenWaveMovementComponent;
class UDrunkenRandomMovementComponent;

void AGrenade::UnstickGrenade(AActor* DamageReceiver, AActor* DamageCauser) {
}

void AGrenade::TurnAttachedTrailOn(bool bRestartTrail) {
}

void AGrenade::StopAudioEventFromBehavior(TSubclassOf<UGrenadeBehavior> BehaviorClass) {
}

void AGrenade::StopAudioEvent(UWwiseEvent* AudioEvent) {
}

void AGrenade::SetLongbowTarget(const FVector& InLocation) {
}

void AGrenade::SetLingering(bool bIsLingering) {
}

void AGrenade::SetFuseTriggeredAudioEvent(UWwiseEvent* NewFuseTriggerEvent) {
}

void AGrenade::SetAttachedTrail(UParticleSystem* NewTrail, FName TrailName) {
}

void AGrenade::ResetFuse() {
}

void AGrenade::RemoveAttachedTrail(bool bDestroyTrail, bool bAttachingNewTrail, FName TrailName) {
}

void AGrenade::OnStuckGrenadeActorDestroyed(AActor* Actor) {
}

void AGrenade::OnGrenadeStop(const FHitResult& ImpactResult) {
}

void AGrenade::OnGrenadeLastBounce(const FHitResult& ImpactResult) {
}

void AGrenade::OnGrenadeBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void AGrenade::MultiplyRadiusBy(float RadiusScalar) {
}

void AGrenade::MultiplyDamageBy(float DamageScalar) {
}

bool AGrenade::IsLingering() {
    return false;
}

void AGrenade::IncrementChildOffset(AGrenade* ParentGrenade, const UGrenadeBehavior_Payload* Payload) {
}

void AGrenade::IgnorePayloadMethod(TSubclassOf<UGrenadeBehavior_Payload> PayloadToIgnore) {
}

bool AGrenade::GrenadeUsesPayload(TSubclassOf<UGrenadeBehavior_Payload> Payload) {
    return false;
}

int32 AGrenade::GetPayloadChildValue(TEnumAsByte<EChildPayloadType> PayloadType) {
    return 0;
}

FVector AGrenade::GetLongbowTarget() {
    return FVector{};
}

FPayloadInstanceData AGrenade::GetInstanceDataFromPayload(const UGrenadeBehavior_Payload* Payload) {
    return FPayloadInstanceData{};
}

UGrenadeHomingComponent* AGrenade::GetHomingComponent() {
    return NULL;
}

float AGrenade::GetGrenadeRadius() const {
    return 0.0f;
}

float AGrenade::GetGrenadeDamage() const {
    return 0.0f;
}

UDrunkenWaveMovementComponent* AGrenade::GetDrunkenWaveComponent() {
    return NULL;
}

UDrunkenRandomMovementComponent* AGrenade::GetDrunkenRandomComponent() {
    return NULL;
}

FGrenadeChildGenerationData AGrenade::GetChildOffset() const {
    return FGrenadeChildGenerationData{};
}

UParticleSystemComponent* AGrenade::GetAttachedTrail(FName TrailName) const {
    return NULL;
}

void AGrenade::FuseTriggered() {
}

void AGrenade::DisableBasicTrail() {
}

void AGrenade::ClearDeliveryMethod() {
}

void AGrenade::AIProjectile_Disarm_Implementation() {
}

void AGrenade::AIProjectile_Detonate_Implementation() {
}

bool AGrenade::AIProjectile_CanBeStolen_Implementation() {
    return false;
}

void AGrenade::AIProjectile_Arm_Implementation() {
}

void AGrenade::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGrenade, GrenadeMod);
    DOREPLIFETIME(AGrenade, GrenadeDamage);
    DOREPLIFETIME(AGrenade, GrenadeExplosionRadius);
    DOREPLIFETIME(AGrenade, GrenadeExplosionForce);
    DOREPLIFETIME(AGrenade, ChildGenerationData);
}

AGrenade::AGrenade() {
    this->GrenadeMod = NULL;
    this->OwningCharacter = NULL;
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    this->GrenadeMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GrenadeMesh"));
    this->DefaultMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DefaultMesh"));
    this->StandMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StandMesh"));
    this->StandCapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("StandCapsule"));
    this->ChildMesh = NULL;
    this->GrenadeMovementComponent = CreateDefaultSubobject<UGrenadeProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->GrenadeHomingComponent = NULL;
    this->RandomMovementComponent = NULL;
    this->WaveMovementComponent = NULL;
    this->AudioComponent = CreateDefaultSubobject<UWwiseAudioComponent>(TEXT("Audio"));
    this->bHasImpacted = false;
    this->GrenadeImpactFuseTime = 0.70f;
    this->bTriggerFuseOnImpact = true;
    this->FuseWarningComponent = NULL;
    this->bCauseDamageOnExplode = true;
    this->bDestroyOnExplode = true;
    this->AttachedTrail = NULL;
    this->InitialVelocityZOffset = 250.00f;
    this->GrenadeDamage = 0.00f;
    this->GrenadeExplosionRadius = 0.00f;
    this->GrenadeExplosionForce = 0.00f;
    this->bStopRotatingWhenNotMoving = true;
    this->bUseDefaultMesh = false;
    this->DeliveryMethod = NULL;
    this->GrenadeMeshCollisionOffset = 10.00f;
    this->BasicTrailData = NULL;
    this->FuseTriggeredAudioEvent = NULL;
    this->MaxAssistAngle = 15.00f;
    this->AssistAngleDot = 0.00f;
}

