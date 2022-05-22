#include "OperativeBarrier.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "OakDamageComponent.h"
#include "GbxCustomizationComponent.h"

class UPrimitiveComponent;
class UGbxDamageType;
class UDamageSource;
class AActor;
class UShieldAugment;
class UObject;

void AOperativeBarrier::UnregisterProjectileOverlapComponent(UPrimitiveComponent* Component) {
}

bool AOperativeBarrier::ToggleBarrierState() {
    return false;
}


void AOperativeBarrier::SetIsTransitioningStates(bool InbIsTransitioningStates) {
}

void AOperativeBarrier::RegisterProjectileOverlapComponent(UPrimitiveComponent* Component) {
}


void AOperativeBarrier::OnRep_RuntimeMods() {
}

void AOperativeBarrier::OnRep_bIsTurbocharged() {
}

void AOperativeBarrier::OnRep_BarrierState() {
}

void AOperativeBarrier::OnDamageScalarChanged(float OldValue, float NewValue) {
}

void AOperativeBarrier::OnBarrierAbsorbedDamage(const UDamageSource* DamageSource, const UGbxDamageType* InDamageType) {
}

void AOperativeBarrier::NotifyActorComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AOperativeBarrier::NotifyActorComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AOperativeBarrier::Multicast_PlayEffectsOnAugment_Implementation(TSubclassOf<UShieldAugment> AugmentClass, FName AugmentName, UObject* AdditionalContext) {
}

bool AOperativeBarrier::HasBarrierMod(EOperativeBarrierModType ModType) const {
    return false;
}

void AOperativeBarrier::HandleProjectileOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



void AOperativeBarrier::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOperativeBarrier, Shield);
    DOREPLIFETIME(AOperativeBarrier, DamageScalar);
    DOREPLIFETIME(AOperativeBarrier, RuntimeMods);
    DOREPLIFETIME(AOperativeBarrier, bIsTurbocharged);
    DOREPLIFETIME(AOperativeBarrier, BarrierState);
}

AOperativeBarrier::AOperativeBarrier() {
    this->BarrierMod1EffectData = NULL;
    this->BarrierMod5EffectData = NULL;
    this->TurbochargeDefault = NULL;
    this->DamageComponent = CreateDefaultSubobject<UOakDamageComponent>(TEXT("OakDamageComponent"));
    this->CustomizationComponent = CreateDefaultSubobject<UGbxCustomizationComponent>(TEXT("CustomizationComponent"));
    this->AuraOverlapPrimitive = NULL;
    this->UsableComponent = NULL;
    this->BarrierTouchComponent = NULL;
    this->Shield = NULL;
    this->OwnerActionAbility = NULL;
    this->bIsTurbocharged = false;
    this->CarriedShotModifier = NULL;
    this->bIsShuttingDown = false;
}

