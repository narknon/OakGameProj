#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EZoomEventType.h"
#include "Components/ActorComponent.h"
#include "WeaponReloadStartedEventDelegate.h"
#include "WeaponReloadEndedEventDelegate.h"
#include "WeaponSlotContainer.h"
#include "EWeaponPutDownType.h"
#include "EWeaponEquipType.h"
#include "ActiveWeaponsComponent.generated.h"

class AWeapon;
class UWeaponSlotData;
class UInventoryBalanceData;
class APawn;
class UInventoryCategoryData;
class UVehicleAttachWeaponAspectData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UActiveWeaponsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZoomEvent, EZoomEventType, IsZooming);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponChangedEvent, AWeapon*, NewWeapon, AWeapon*, LastWeapon);
    
    UPROPERTY(BlueprintAssignable)
    FZoomEvent OnZoomChange;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponChangedEvent OnWeaponChanged;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponReloadStartedEvent OnWeaponReloadStarted;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponReloadEndedEvent OnWeaponReloadEnded;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UWeaponSlotData*> WeaponSlots;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WeaponsScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AWeapon> DefaultWeaponClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UInventoryBalanceData* DefaultBalanceWeaponData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoSpawnDefaultWeapon;
    
    UPROPERTY(Transient)
    FWeaponSlotContainer Weapons;
    
    UPROPERTY(Transient)
    APawn* OwnerPawn;
    
    UPROPERTY(Transient)
    UInventoryCategoryData* WeaponItemType;
    
public:
    UActiveWeaponsComponent();
protected:
    UFUNCTION()
    void WeaponReloadStarted(AWeapon* Weapon, bool bAuto);
    
    UFUNCTION()
    void WeaponReloadEnded(AWeapon* Weapon, bool bCompleted);
    
    UFUNCTION()
    void WeaponPutDown(AWeapon* PutDownWeapon);
    
public:
    UFUNCTION(BlueprintCallable)
    AWeapon* SpawnWeaponFromClass(TSubclassOf<AWeapon> WeaponClass, UWeaponSlotData* Slot);
    
    UFUNCTION(BlueprintCallable)
    AWeapon* SpawnWeaponFromBalanceData(UInventoryBalanceData* WeaponBalanceData, UWeaponSlotData* Slot);
    
    UFUNCTION(BlueprintCallable)
    AWeapon* SpawnVehicleWeaponFromAspectData(const UVehicleAttachWeaponAspectData* VehicleWeaponAspectData, UWeaponSlotData* Slot);
    
    UFUNCTION(BlueprintCallable)
    void SpawnDefaultWeapon();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUnlockWeaponActions(FName Reason, int32 ChannelsMask);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopWeaponActions(uint8 Slot, int32 ChannelsMask, bool bClearInput);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetCurrentWeapon(AWeapon* NewWeapon, uint8 NewWeaponSlot, EWeaponPutDownType PutDownType, EWeaponEquipType EquipType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerLockWeaponActions(FName Reason, int32 ChannelsMask, bool bStopActions, bool bClearInput);
    
    UFUNCTION()
    void OnWeaponResumeUse(UWeaponSlotData* AttachedSlot);
    
public:
    UFUNCTION(BlueprintPure)
    AWeapon* GetWeapon(uint8 Slot) const;
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientUnlockWeaponActions(FName Reason, int32 ChannelsMask);
    
    UFUNCTION(Client, Reliable)
    void ClientStopWeaponActions(uint8 Slot, int32 ChannelsMask, bool bClearInput);
    
    UFUNCTION(Client, Reliable)
    void ClientLockWeaponActions(FName Reason, int32 ChannelsMask, bool bStopActions, bool bClearInput);
    
};

