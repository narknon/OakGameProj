#include "LightProjectile.h"
#include "Net/UnrealNetwork.h"

class UParticleSystemComponent;
class AActor;
class UActorComponent;
class UWwiseEvent;
class UGbxDamageType;
class UPrimitiveComponent;
class APawn;
class UImpactData;

void ULightProjectile::SetLifetime(float NewLifetime) {
}

void ULightProjectile::SetHomingTargetLocation(FVector HomingLocation) {
}

void ULightProjectile::SetHomingTarget(AActor* HomingTarget, FVector TargetOffset) {
}

void ULightProjectile::PlayFeedbackSoundEvent(UWwiseEvent* Event) const {
}

void ULightProjectile::OnRep_Shutdown() {
}

void ULightProjectile::OnRep_InitialClientState() {
}

void ULightProjectile::OnRep_Impact() {
}

void ULightProjectile::OnRep_Exploded() {
}

void ULightProjectile::OnRep_Attached() {
}

void ULightProjectile::OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent) {
}

void ULightProjectile::OnAttachedComponentUnregistered(UActorComponent* UnregisteredComponent) {
}

void ULightProjectile::OnAttachedComponentCollisionChanged(UPrimitiveComponent* ChangedComponent) {
}

void ULightProjectile::OnAttachedActorFractured(const FVector& HitPoint, const FVector& HitDirection) {
}

void ULightProjectile::OnAttachedActorDestroyed(AActor* DestroyedActor) {
}

void ULightProjectile::K2_ApplyImpactDamage(const FHitResult& Hit, float ImpactDamage, bool bPenetrated, bool bCanReflect) {
}

bool ULightProjectile::IsHomingMovingDirectlyTowardsTarget() const {
    return false;
}

bool ULightProjectile::IsHoming() const {
    return false;
}

void ULightProjectile::InitChildData(FLightProjectileInitializationData& InitData) const {
}

AActor* ULightProjectile::GetTarget() const {
    return NULL;
}

AActor* ULightProjectile::GetSource() const {
    return NULL;
}

float ULightProjectile::GetModifierValue() const {
    return 0.0f;
}

EWeaponShotModifierType ULightProjectile::GetModifierType() const {
    return EWeaponShotModifierType::None;
}

APawn* ULightProjectile::GetInstigator() const {
    return NULL;
}

UImpactData* ULightProjectile::GetImpactDataOverride() const {
    return NULL;
}

UImpactData* ULightProjectile::GetImpactData() const {
    return NULL;
}

float ULightProjectile::GetHomingStartTime() const {
    return 0.0f;
}

uint8 ULightProjectile::GetFiringPatternID() const {
    return 0;
}

UGbxDamageType* ULightProjectile::GetDamageType() const {
    return NULL;
}

AActor* ULightProjectile::GetDamageCauser() const {
    return NULL;
}

TEnumAsByte<ETeamAttitude::Type> ULightProjectile::GetAttitudeTowards(AActor* TargetActor) const {
    return ETeamAttitude::Friendly;
}

FVector ULightProjectile::GetAttachedImpactNormal() const {
    return FVector{};
}

AActor* ULightProjectile::GetAttachedDamageReceiverActor() const {
    return NULL;
}

AActor* ULightProjectile::GetAttachedActor() const {
    return NULL;
}

AActor* ULightProjectile::GetAssociatedActor(ELightProjectileQueryActorType ActorType) const {
    return NULL;
}

void ULightProjectile::Explode(float Delay) {
}

void ULightProjectile::EnableHoming() {
}

void ULightProjectile::DisableHoming() {
}

void ULightProjectile::Destroy() {
}

void ULightProjectile::ApplyAreaDamage(const FVector& Origin, AActor* HitActor, const FHitResult& Hit) {
}

void ULightProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULightProjectile, SyncID);
    DOREPLIFETIME(ULightProjectile, InitialClientState);
    DOREPLIFETIME(ULightProjectile, AttachmentData);
    DOREPLIFETIME(ULightProjectile, ExplodeData);
    DOREPLIFETIME(ULightProjectile, ImpactInfo);
    DOREPLIFETIME(ULightProjectile, ShutdownID);
}

ULightProjectile::ULightProjectile() {
    this->SyncID = 0;
    this->Data = NULL;
    this->Damage = 0.00f;
    this->DamageRadius = 0.00f;
    this->DamageType = NULL;
    this->DamageSource = NULL;
    this->ImpactForce = 0.00f;
    this->bActive = false;
    this->ShutdownID = 0;
    this->StartTime = 0.00f;
    this->LifeTime = 0.00f;
    this->HomingStartTime = 0.00f;
    this->ElapsedTime = 0.00f;
    this->GravityScale = 0.00f;
    this->BodyComponent = NULL;
    this->TracerComponent = NULL;
    this->NumBounces = 0;
    this->DamageModifierComp = NULL;
}

