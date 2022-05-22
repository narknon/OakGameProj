#include "AIStolenProjectileComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UPrimitiveComponent;

void UAIStolenProjectileComponent::StolenProjectileReleased() {
}

void UAIStolenProjectileComponent::SetChanceToSucceed(float NewChanceToSucceed) {
}

bool UAIStolenProjectileComponent::ReturnProjectileToTarget(float Speed, float AnglePercent, FName Socket, FVector TargetOffset, FRotator AngleOffset, float MaxPrediction) {
    return false;
}

bool UAIStolenProjectileComponent::ReturnProjectileToOwner(float Speed, float AnglePercent, FName Socket, FVector TargetOffset, FRotator AngleOffset, float MaxPrediction) {
    return false;
}

bool UAIStolenProjectileComponent::ReturnProjectileToLocation(FVector Location, float Speed, float AnglePercent) {
    return false;
}

bool UAIStolenProjectileComponent::ReturnProjectileToActor(AActor* Actor, float Speed, float AnglePercent, FName Socket, FVector TargetOffset, FRotator AngleOffset, float MaxPrediction) {
    return false;
}

void UAIStolenProjectileComponent::ReleaseOnStolenProjectileDestroyed(AActor* unused) {
}

void UAIStolenProjectileComponent::OnRep_ClientData() {
}

void UAIStolenProjectileComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UAIStolenProjectileComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool UAIStolenProjectileComponent::LerpToSocket(FName Socket, float Duration) {
    return false;
}

EOakElementalType UAIStolenProjectileComponent::GetElementalType() const {
    return EOakElementalType::None;
}

bool UAIStolenProjectileComponent::DisarmProjectile() {
    return false;
}

bool UAIStolenProjectileComponent::DidInteractionSucceed() const {
    return false;
}

bool UAIStolenProjectileComponent::DetonateProjectile() {
    return false;
}

bool UAIStolenProjectileComponent::DestroyProjectile() {
    return false;
}

bool UAIStolenProjectileComponent::AttachProjectile(FName SocketName) {
    return false;
}

bool UAIStolenProjectileComponent::ArmProjectile() {
    return false;
}

void UAIStolenProjectileComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAIStolenProjectileComponent, ClientData);
}

UAIStolenProjectileComponent::UAIStolenProjectileComponent() {
    this->DirectionConeHalfAngle = 45.00f;
    this->bLimitedByDirection = true;
    this->ChanceToSucceed = 1.00f;
    this->LerpToSocketCurve = NULL;
    this->bCanStealWhenLeftComponent = true;
    this->TimeToForget = 4.00f;
    this->StolenProjectile = NULL;
    this->SkelMeshComp = NULL;
    this->TargetingComponent = NULL;
    this->BlackboardComponent = NULL;
}

