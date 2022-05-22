#include "Shield.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "Components/SkeletalMeshComponent.h"
#include "WwiseAudioComponent.h"

class UGbxAttributeData;
class AWeapon;
class UDamageSource;
class AOakCharacter;
class UGbxDamageType;
class UParticleSystemComponent;
class UPawnAttachSlotComponent;
class UShieldAugment;
class UObject;

void AShield::RemoveModifierFromAttribute(UGbxAttributeData* Attribute, UClass* AugmentClass, EShieldAttributeModificationSource Source) {
}

void AShield::OnWeaponShotModified(AWeapon* Weapon, const FWeaponShotModifierData& Data) {
}

void AShield::OnWeaponChanged(AWeapon* Weapon, AWeapon* LastWeapon) {
}

void AShield::OnShieldUnequipped(AOakCharacter* Equipper) {
}

void AShield::OnShieldNotFilled(FGameResourcePoolReference ResourcePool) {
}

void AShield::OnShieldNotDepleted(FGameResourcePoolReference ResourcePool) {
}

void AShield::OnShieldFilled(FGameResourcePoolReference ResourcePool) {
}

void AShield::OnShieldEquipped(AOakCharacter* Equipper) {
}

void AShield::OnShieldDepleted(FGameResourcePoolReference ResourcePool) {
}

void AShield::OnShieldAbsorbedDamage(const UDamageSource* DamageSource, const UGbxDamageType* InDamageType) {
}

void AShield::OnProjectedShieldParticleSystemFinished(UParticleSystemComponent* PSC) {
}

void AShield::OnOwnerUncrouched() {
}

void AShield::OnOwnerHealthStateChanged(EHealthState HealthState) {
}

void AShield::OnOwnerEnteredVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void AShield::OnOwnerCrouched() {
}

void AShield::Multicast_PlayEffectsOnAugment_Implementation(TSubclassOf<UShieldAugment> AugmentClass, FName AugmentName, UObject* AdditionalContext) {
}

bool AShield::IsProjectedShield() const {
    return false;
}

bool AShield::IsPendingDestroyFromBarrier() const {
    return false;
}

bool AShield::IsBarrierShield() const {
    return false;
}

TSubclassOf<UGbxDamageType> AShield::GetDamageType() const {
    return NULL;
}

float AShield::GetBaseShieldDamage() {
    return 0.0f;
}

void AShield::AddModifierToAttribute(UGbxAttributeData* Attribute, UObject* Context, float Modifier, EGbxAttributeModifierType Type, UClass* AugmentClass, EShieldAttributeModificationSource Source) {
}

void AShield::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShield, bIsBarrierShield);
}

AShield::AShield() {
    this->ShieldMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ShieldMesh"));
    this->ShieldResource = NULL;
    this->ShieldDamageAttributeData = NULL;
    this->BalanceStateComponent = NULL;
    this->OwningPlayer = NULL;
    this->ShotModifier = NULL;
    this->ShieldState = EShieldState::Uninitialized;
    this->ShieldBreakFeedback = NULL;
    this->AdaptiveType = EOakElementalType::None;
    this->bIsBarrierShield = false;
    this->AudioComponent = CreateDefaultSubobject<UWwiseAudioComponent>(TEXT("AudioComponent"));
    this->ProjectedShield = NULL;
    this->ProjectedAudioComponent = NULL;
    this->AmpAudioComponent = NULL;
}

