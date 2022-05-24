#include "LightBeam.h"
#include "Net/UnrealNetwork.h"

class UParticleSystemComponent;
class AActor;
class APawn;
class UGbxDamageType;

void ULightBeam::SetTargetSocket(FName Socket) {
}

void ULightBeam::OnTrackedImpactParticleSystemFinished(UParticleSystemComponent* PSC) {
}

void ULightBeam::OnRep_ModifierValue() {
}

void ULightBeam::OnRep_ModifierType() {
}

void ULightBeam::OnRep_ClientState() {
}

void ULightBeam::LockOntoTarget(const FLightBeamAttachment& Target) {
}

void ULightBeam::InitChildData(FLightBeamInitializationData& InitData) const {
}

AActor* ULightBeam::GetTargetActor() const {
    return NULL;
}

FLightBeamAttachment ULightBeam::GetTarget() const {
    return FLightBeamAttachment{};
}

AActor* ULightBeam::GetSourceActor() const {
    return NULL;
}

FLightBeamAttachment ULightBeam::GetSource() const {
    return FLightBeamAttachment{};
}

APawn* ULightBeam::GetInstigator() const {
    return NULL;
}

float ULightBeam::GetImpactForce() const {
    return 0.0f;
}

UGbxDamageType* ULightBeam::GetDamageType() const {
    return NULL;
}

AActor* ULightBeam::GetDamageCauser() const {
    return NULL;
}

float ULightBeam::GetDamage() const {
    return 0.0f;
}

AActor* ULightBeam::GetAssociatedActor(ELightBeamQueryActorType ActorType) const {
    return NULL;
}

void ULightBeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULightBeam, DamageInterval);
    DOREPLIFETIME(ULightBeam, ClientState);
    DOREPLIFETIME(ULightBeam, ModifierType);
    DOREPLIFETIME(ULightBeam, ModifierValue);
    DOREPLIFETIME(ULightBeam, ServerSourcePoint);
    DOREPLIFETIME(ULightBeam, ServerTargetPoint);
}

ULightBeam::ULightBeam() {
    this->Data = NULL;
    this->Component = NULL;
    this->AltViewComponent = NULL;
    this->DamageInterval = 0.00f;
    this->LockOnContactTime = 0.00f;
    this->LockOnBreakRadius = 0.00f;
    this->LockOnBreakAngle = 0.00f;
    this->ModifierType = EWeaponShotModifierType::None;
    this->ModifierValue = 1.00f;
    this->StartTime = 0.00f;
    this->LastDamagedActorContinuousContact = 0.00f;
    this->ParentBeam = NULL;
    this->RootParentBeam = NULL;
}

