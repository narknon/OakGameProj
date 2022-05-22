#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponDebugInterface.h"
#include "LoadedAmmoChangedDelegateDelegate.h"
#include "WeaponAmmoComponent.generated.h"

class UGbxAmmoTypeData;
class AWeapon;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponAmmoComponent : public UActorComponent, public IWeaponDebugInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UGbxAmmoTypeData* AmmoTypeData;
    
    UPROPERTY(EditAnywhere)
    bool bDisplayAmmoInHUD;
    
    UPROPERTY(BlueprintAssignable)
    FLoadedAmmoChangedDelegate NotifyAmmoChanged;
    
private:
    UPROPERTY(Transient)
    AWeapon* WeaponPrivate;
    
public:
    UWeaponAmmoComponent();
protected:
    UFUNCTION(Client, Reliable)
    void ClientRefillAmmo(int32 Amount);
    
    
    // Fix for true pure virtual functions not being implemented
};

