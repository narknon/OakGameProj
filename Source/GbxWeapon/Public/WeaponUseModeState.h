#pragma once
#include "CoreMinimal.h"
#include "WeaponUseModeState.generated.h"

class UWeaponReloadComponent;
class UWeaponUseComponent;
class UActorComponent;
class UWeaponAudioProviderComponent;
class UWeaponAmmoComponent;
class UDamageModifierComponent;
class UWeaponZoomComponent;

USTRUCT(BlueprintType)
struct FWeaponUseModeState {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 InputChannels;
    
    UPROPERTY()
    uint8 PrimaryInputChannel;
    
    UPROPERTY()
    bool bReloadNeeded;
    
    UPROPERTY(Export)
    UWeaponUseComponent* UseComponent;
    
    UPROPERTY(Export)
    UWeaponAmmoComponent* AmmoComponent;
    
    UPROPERTY(Export)
    UWeaponReloadComponent* ReloadComponent;
    
    UPROPERTY(Export)
    UWeaponZoomComponent* ZoomComponent;
    
    UPROPERTY(Export)
    UWeaponAudioProviderComponent* AudioProviderComponent;
    
    UPROPERTY(Export)
    UDamageModifierComponent* DamageModifierComponent;
    
    UPROPERTY(Export)
    TArray<UActorComponent*> Components;
    
    GBXWEAPON_API FWeaponUseModeState();
};

