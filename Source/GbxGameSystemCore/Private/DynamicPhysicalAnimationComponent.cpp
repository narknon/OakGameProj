#include "DynamicPhysicalAnimationComponent.h"

class USkeletalMeshComponent;
class UPhysicalAnimationProfileAsset;
class UPrimitiveComponent;
class AActor;

void UDynamicPhysicalAnimationComponent::SetStrengthMultiplier(float NewValue) {
}

void UDynamicPhysicalAnimationComponent::SetSkeletalMeshComponent(USkeletalMeshComponent* NewSkeletalMeshComponent) {
}

void UDynamicPhysicalAnimationComponent::SetRootMotionControl(EPhysicalAnimationRootMotionControl MotionControl) {
}

void UDynamicPhysicalAnimationComponent::SetHasAnimationPlaying(bool bPlaying) {
}

void UDynamicPhysicalAnimationComponent::SetEnableRagdoll(bool bEnable) {
}

void UDynamicPhysicalAnimationComponent::SetEnablePhysicalAnimation(bool bEnable, FName BodyName) {
}

void UDynamicPhysicalAnimationComponent::SetActiveProfile(const UPhysicalAnimationProfileAsset* Profile) {
}

void UDynamicPhysicalAnimationComponent::OnRigidBodyOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

float UDynamicPhysicalAnimationComponent::GetStrengthMultiplier() {
    return 0.0f;
}

EPhysicalAnimationRootMotionControl UDynamicPhysicalAnimationComponent::GetRootMotionControl() const {
    return EPhysicalAnimationRootMotionControl::PARMC_DrivenByAnimated;
}

void UDynamicPhysicalAnimationComponent::DetachBodyFromAllExternalRigidBodies(FName BodyName) {
}

void UDynamicPhysicalAnimationComponent::AttachBodyTo(FName BodyName, UPrimitiveComponent* AttachToComponent, FName AttachToBodyName, float VelocitySpaceBlend, float BreakForce) {
}

UDynamicPhysicalAnimationComponent::UDynamicPhysicalAnimationComponent() {
    this->PhysicalAnimationCollisionProfileName = TEXT("PhysicalAnimation");
    this->KinematicAnimationCollisionProfileName = TEXT("CharacterMesh");
    this->SkeletalMeshComponent = NULL;
    this->PhysicsAsset = NULL;
    this->bHasPhysicallyAnimatingBones = false;
}

