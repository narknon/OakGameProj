#include "CollisionDamageComponent.h"

class UPrimitiveComponent;
class AActor;

void UCollisionDamageComponent::OnMeshComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UCollisionDamageComponent::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

UCollisionDamageComponent::UCollisionDamageComponent() {
    this->MinVelocityToCauseDamage = 500.00f;
    this->HitForceVelocityFactor = 1.00f;
    this->ConditionalDamageCondition = NULL;
    this->DamageCurveRefSpeed = 50.00f;
    this->HitCooldown = 0.40f;
    this->FrontalCollisionAngle = 45.00f;
    this->DamageType = NULL;
    this->DamageSource = NULL;
    this->MyOakVehicle = NULL;
}

