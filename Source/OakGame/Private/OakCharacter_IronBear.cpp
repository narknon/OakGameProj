#include "OakCharacter_IronBear.h"
#include "Net/UnrealNetwork.h"
#include "GbxCustomizationComponent.h"

class UOakPlayerAbilityManagerComponent;
class APawn;
class AController;
class UOakActionAbilityAugmentData;
class UOakActionAbilityAugmentSlotData;
class AOakWeapon_IronBearHardPoint;

void AOakCharacter_IronBear::StartManualExit() {
}


void AOakCharacter_IronBear::OnRep_CurrentDamageLevel() {
}

void AOakCharacter_IronBear::OnRep_bIsExiting() {
}

void AOakCharacter_IronBear::OnRep_bBubbleShieldFiring() {
}

void AOakCharacter_IronBear::OnRep_bBubbleShieldEnabled() {
}

void AOakCharacter_IronBear::OnPlayerLevelChanged(int32 OldLevel, int32 NewLevel) {
}

void AOakCharacter_IronBear::OnHealthMinMaxValueChanged(FGameResourcePoolReference& HealthPool, float NewMin, float NewMax) {
}

void AOakCharacter_IronBear::OnHealthCurrentValueChanged(FGameResourcePoolReference& HealthPool, float NewValue) {
}

void AOakCharacter_IronBear::OnHardPointUseStateChanged() {
}






void AOakCharacter_IronBear::OnDriverDetachFinished(APawn* InPawn, AController* InController) {
}

void AOakCharacter_IronBear::OnDriverAttachFinished(APawn* InPawn, AController* InController) {
}


void AOakCharacter_IronBear::OnBubbleShieldResourceNowNotDepleted(FGameResourcePoolReference ResourcePool) {
}

void AOakCharacter_IronBear::OnBubbleShieldResourceNowDepleted(FGameResourcePoolReference ResourcePool) {
}


void AOakCharacter_IronBear::OnBubbleShieldEnabledStateChanged_Implementation() {
}



bool AOakCharacter_IronBear::IsCoreActive(EIronBearCoreType CoreType) const {
    return false;
}

bool AOakCharacter_IronBear::IsAugmentInModSlot(UOakActionAbilityAugmentSlotData* Slot, UOakActionAbilityAugmentData* Augment) const {
    return false;
}


void AOakCharacter_IronBear::HandleOnDead() {
}


UOakPlayerAbilityManagerComponent* AOakCharacter_IronBear::GetPlayerAbilityManagerComponent() const {
    return NULL;
}

float AOakCharacter_IronBear::GetIronBearTimeLeftPercent() const {
    return 0.0f;
}


AOakWeapon_IronBearHardPoint* AOakCharacter_IronBear::GetHardPointWeaponByOrientation(EIronBearHardPointOrientation Orientation) const {
    return NULL;
}

AOakWeapon_IronBearHardPoint* AOakCharacter_IronBear::GetHardPointWeapon(UOakActionAbilityAugmentSlotData* Slot) const {
    return NULL;
}

void AOakCharacter_IronBear::ExitIronBear_Implementation(EIronBearExitReason InExitReason) {
}
bool AOakCharacter_IronBear::ExitIronBear_Validate(EIronBearExitReason InExitReason) {
    return true;
}

void AOakCharacter_IronBear::EndHardPointAction(UOakActionAbilityAugmentSlotData* Slot) {
}

void AOakCharacter_IronBear::ClientFaceRotation_Implementation(float Yaw) {
}

void AOakCharacter_IronBear::CancelManualExit() {
}

void AOakCharacter_IronBear::BeginHardPointAction(UOakActionAbilityAugmentSlotData* Slot) {
}


void AOakCharacter_IronBear::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakCharacter_IronBear, IronBearActionAbility);
    DOREPLIFETIME(AOakCharacter_IronBear, Gunner);
    DOREPLIFETIME(AOakCharacter_IronBear, GunnersNest);
    DOREPLIFETIME(AOakCharacter_IronBear, ActiveCoreTypes);
    DOREPLIFETIME(AOakCharacter_IronBear, CurrentDamageLevel);
    DOREPLIFETIME(AOakCharacter_IronBear, bBubbleShieldEnabled);
    DOREPLIFETIME(AOakCharacter_IronBear, bBubbleShieldFiring);
    DOREPLIFETIME(AOakCharacter_IronBear, bIsExiting);
    DOREPLIFETIME(AOakCharacter_IronBear, BubbleShieldResourcePool);
}

AOakCharacter_IronBear::AOakCharacter_IronBear() {
    this->CoreSlot = NULL;
    this->bDisableIronBearCapsuleCollisionOnExit = false;
    this->ManualExitTimeSeconds = 1.50f;
    this->GundamCoreCooldownTimeSeconds = 2.00f;
    this->GunnersNestClass = NULL;
    this->IronBearUberAbilityClass = NULL;
    this->StartEngineEvent = NULL;
    this->StartEngineEventQuick = NULL;
    this->StopEngineEvent = NULL;
    this->StartManualExitEvent = NULL;
    this->StopManualExitEvent = NULL;
    this->RtpcManualExit = NULL;
    this->StartTimeLeftEvent = NULL;
    this->StopTimeLeftEvent = NULL;
    this->RtpcTimeLeft = NULL;
    this->RtpcRelativeSpeed = NULL;
    this->RtpcDamage = NULL;
    this->DriverEffectsBus = NULL;
    this->DriverEffectBusWetVolume = 0.00f;
    this->DriverEffectBusDryVolume = 0.00f;
    this->IronBearActionAbility = NULL;
    this->Gunner = NULL;
    this->SpawnStyle = EIronBearSpawnStyle::Full;
    this->ExitReason = EIronBearExitReason::Undefined;
    this->DurationTimeRemainingOnExit = 0.00f;
    this->OakPlayerController = NULL;
    this->GunnersNest = NULL;
    this->BubbleShieldResource = NULL;
    this->PrimarySeatComponent = NULL;
    this->CurrentDamageLevel = EIronBearDamageLevel::None;
    this->bBubbleShieldEnabled = false;
    this->bBubbleShieldFiring = false;
    this->bIsExiting = false;
    this->AppliedAudioEffect = NULL;
    this->CustomizationComponent = CreateDefaultSubobject<UGbxCustomizationComponent>(TEXT("CustomizationComponent"));
    this->bIronCub = false;
}

