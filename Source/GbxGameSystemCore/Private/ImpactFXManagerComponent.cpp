#include "ImpactFXManagerComponent.h"

class UParticleSystemComponent;
class UActorComponent;
class AActor;

void UImpactFXManagerComponent::SetEffectsEnabled(bool bEnabled) {
}

void UImpactFXManagerComponent::OnTrackedParticleSystemFinished(UParticleSystemComponent* PSC) {
}

void UImpactFXManagerComponent::OnTrackedComponentDeactivated(UActorComponent* Component) {
}

void UImpactFXManagerComponent::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

UImpactFXManagerComponent::UImpactFXManagerComponent() {
    this->bScaleImpactDecalEffects = true;
    this->BounceEffect = NULL;
    this->BounceEffectThreshold = 100.00f;
    this->BounceEffectFrequency = 0.40f;
    this->bAlignBounceEffectToVelocity = true;
    this->SlideEffect = NULL;
    this->SlideEffectThreshold = 100.00f;
    this->SlideEffectStopThreshold = 10.00f;
    this->SlideEffectFrequency = 0.80f;
    this->StartSlideEffectDelay = 0.10f;
    this->bOverrideSlideEffectOrigin = false;
    this->bEffectsEnabled = true;
    this->bAutoEnableCollisionNotifications = false;
}

