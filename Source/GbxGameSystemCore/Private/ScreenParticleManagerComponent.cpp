#include "ScreenParticleManagerComponent.h"

class AActor;
class UMaterialInterface;
class UParticleSystemComponent;
class UParticleSystem;
class UParticlePropertyTrackingData;

void UScreenParticleManagerComponent::ShowScreenParticleForActor(AActor* Actor, UParticleSystem* Template, bool bHideWhenFinished, FVector2D ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, bool bOnlyOwnerSee, bool bAlwaysVisible, FName Tag, bool bAllowMultipleInstances, bool bServerAuthority, bool bTickEvenWhenPaused, bool bHideDuringInGameMenu) {
}

void UScreenParticleManagerComponent::OnScreenParticleFinished(UParticleSystemComponent* Component) {
}

void UScreenParticleManagerComponent::HideScreenParticleForActor(AActor* Actor, UParticleSystem* Template, FName Tag, bool bAllowParticleToFinish, bool bServerAuthority) {
}

void UScreenParticleManagerComponent::ClientTrackParticleProperty_Implementation(UParticlePropertyTrackingData* TrackingData, UParticleSystem* Template, FName Tag, FName PropertyName, float PropertyValue, bool bAddToValue, UMaterialInterface* UsedMaterialProperty, FName MaterialPropertyName) {
}

void UScreenParticleManagerComponent::ClientShowScreenParticleEx_Implementation(UParticleSystem* Template, uint8 InitFlags, FVector2D ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, FName Tag) {
}

void UScreenParticleManagerComponent::ClientShowScreenParticle(UParticleSystem* Template, bool bHideWhenFinished, FVector2D ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, bool bOnlyOwnerSee, bool bAlwaysVisible, FName Tag, bool bAllowMultipleInstances, bool bTickEvenWhenPaused, bool bHideDuringInGameMenu, bool bDepthPriorityWorld) {
}

void UScreenParticleManagerComponent::ClientSetScreenParticleVectorParameter_Implementation(UParticleSystem* Template, FName Tag, FName ParameterName, FVector Param) {
}

void UScreenParticleManagerComponent::ClientSetScreenParticleMaterialParameter_Implementation(UParticleSystem* Template, FName Tag, FName ParameterName, UMaterialInterface* Param) {
}

void UScreenParticleManagerComponent::ClientSetScreenParticleFloatParameter_Implementation(UParticleSystem* Template, FName Tag, FName ParameterName, float Param) {
}

void UScreenParticleManagerComponent::ClientSetScreenParticleColorParameter_Implementation(UParticleSystem* Template, FName Tag, FName ParameterName, FLinearColor Param) {
}

void UScreenParticleManagerComponent::ClientSetScreenParticleActorParameter_Implementation(UParticleSystem* Template, FName Tag, FName ParameterName, AActor* Param) {
}

void UScreenParticleManagerComponent::ClientHideScreenParticle_Implementation(UParticleSystem* Template, FName Tag, bool bAllowParticleToFinish) {
}

UScreenParticleManagerComponent::UScreenParticleManagerComponent() {
}

