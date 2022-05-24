#include "OakWeapon.h"
#include "Net/UnrealNetwork.h"

class UWwiseAudioComponent;
class UManufacturerData;

void AOakWeapon::UpdateBodyLoopActivity() {
}

void AOakWeapon::ReconfigureWeaponAudio(int32 UseModeIdx, TArray<FWeaponConfigurationEvent> ConfigureEvents, TArray<FWeaponConfigurationRtpc> ConfigureRtpcs, bool bAdditive) {
}

void AOakWeapon::OnRep_WeaponSkin() {
}

void AOakWeapon::OnRep_UpdateAmpEffects() {
}


uint8 AOakWeapon::GetPartTypeValue(EOakWeaponPartType PartType) const {
    return 0;
}

UManufacturerData* AOakWeapon::GetManufacturer() const {
    return NULL;
}

void AOakWeapon::CloneAudioConfiguration(UWwiseAudioComponent* TargetComponent, int32 UseModeIdx) {
}

void AOakWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakWeapon, AudioBodyLoopState);
    DOREPLIFETIME(AOakWeapon, bAmpEffectActive);
    DOREPLIFETIME(AOakWeapon, WeaponSkin);
    DOREPLIFETIME(AOakWeapon, QuickEquipTime);
}

AOakWeapon::AOakWeapon() {
    this->GripPartType = 0;
    this->ForegripPartType = 0;
    this->MagPartType = 0;
    this->ModePartType = 0;
    this->ModeSwitchPartType = 0;
    this->BarrelPartType = 0;
    this->BoltPartType = 0;
    this->TriggerPartType = 0;
    this->HammerPartType = 0;
    this->ScopePartType = 0;
    this->MeleePartType = 0;
    this->CustomAPartType = 0;
    this->CustomBPartType = 0;
    this->bHasPistolStock = false;
    this->HolsteredSizeType = EWeaponHolsteredSizeType::Small;
    this->BalanceStateComponent = NULL;
    this->AudioBodyLoopState = 0;
    this->bAmpEffectActive = false;
    this->WeaponSkin = NULL;
    this->ElementalEffectBucketType = EOakElementalStackBucketType::Weapon;
    this->bWeaponUsingCollision = false;
}

