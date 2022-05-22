#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EWeaponVisibleAmmoUpdateMethod.h"
#include "EWeaponVisibleAmmoState.h"
#include "EWeaponActionType.h"
#include "ActionState_Base.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "WeaponStatics.generated.h"

class AActor;
class AWeapon;
class UGbxAction;
class UObject;
class UGbxDamageType;
class UProjectileEQSProxy;

UCLASS(BlueprintType)
class GBXWEAPON_API UWeaponStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWeaponStatics();
    UFUNCTION(BlueprintCallable)
    static void UpdateVisibleAmmo(AWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    static void UnhideWeapons(AActor* WeaponUser, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void UnhideWeapon(AActor* WeaponUser, uint8 Slot, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibleAmmoUpdateMethod(AWeapon* Weapon, EWeaponVisibleAmmoUpdateMethod NewUpdateMethod);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibleAmmoState(AWeapon* Weapon, EWeaponVisibleAmmoState NewState);
    
    UFUNCTION(BlueprintCallable)
    static void ResetVisibleAmmoState(AWeapon* Weapon);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RefillAmmo(AWeapon* Weapon, int32 Amount, bool bAsPercent);
    
private:
    UFUNCTION(BlueprintCallable)
    static UGbxAction* K2_PlayWeaponHoldActionEx(AActor* Actor, TEnumAsByte<EWeaponActionType> WeaponAction, AWeapon* Weapon, FActionState_Base ActionParams);
    
    UFUNCTION(BlueprintCallable)
    static UGbxAction* K2_PlayWeaponHoldAction(AActor* Actor, TEnumAsByte<EWeaponActionType> WeaponAction, AWeapon* Weapon, float PlayRate, float Duration);
    
public:
    UFUNCTION(BlueprintCallable)
    static void HideWeapons(AActor* WeaponUser, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void HideWeapon(AActor* WeaponUser, uint8 Slot, FName Reason);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void GiveAmmo(AWeapon* Weapon, int32 Amount, bool bLoaded, bool bAsPercent);
    
    UFUNCTION(BlueprintPure)
    static AWeapon* GetWeapon(UObject* Context);
    
    UFUNCTION(BlueprintPure)
    static float GetMaxZoomFOVScale(AWeapon* Weapon, uint8 UseMode);
    
    UFUNCTION(BlueprintPure)
    static int32 GetLoadedAmmo(AWeapon* Weapon, uint8 UseMode);
    
    UFUNCTION(BlueprintPure)
    static float GetFireRateAccelPercent(AWeapon* Weapon, uint8 UseMode);
    
    UFUNCTION(BlueprintPure)
    static float GetFireRate(AWeapon* Weapon, uint8 UseMode);
    
    UFUNCTION(BlueprintPure)
    static UGbxDamageType* GetDamageType(AWeapon* Weapon, uint8 UseMode);
    
    UFUNCTION(BlueprintPure)
    static UProjectileEQSProxy* CreateProjectileEQSProxy(FVector Location, FRotator Rotation, AActor* ReferenceActor);
    
};

