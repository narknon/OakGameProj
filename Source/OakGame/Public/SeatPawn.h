#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Pawn.h"
#include "CameraViewTargetInterface.h"
#include "GbxWeaponUserInterface.h"
#include "SeatPawn.generated.h"

class UInputComponent;
class UBodyWeaponHoldManagerComponent;
class UWeaponSlotData;
class UOakPawnAttachSlotComponent;
class UActiveWeaponsComponent;
class USceneComponent;

UCLASS()
class ASeatPawn : public APawn, public ICameraViewTargetInterface, public IGbxWeaponUserInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float MaxWeaponAimAdjustmentAngle;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakPawnAttachSlotComponent* SeatComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UInputComponent> InputComponentClass;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UActiveWeaponsComponent* WeaponsComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UBodyWeaponHoldManagerComponent* BodyWeaponHoldManager;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetTurretRotationWhenUnoccupied;
    
public:
    ASeatPawn();
    UFUNCTION(BlueprintCallable)
    void StopZooming(bool bForcedStop);
    
    UFUNCTION(BlueprintCallable)
    void StopUsingWeapon(UWeaponSlotData* Slot, uint8 InputChannel);
    
    UFUNCTION(BlueprintCallable)
    void StopReload(UWeaponSlotData* Slot);
    
    UFUNCTION(BlueprintCallable)
    void StartZooming();
    
    UFUNCTION(BlueprintCallable)
    void StartUsingWeapon(UWeaponSlotData* Slot, uint8 InputChannel);
    
protected:
    UFUNCTION()
    void SeatAttachStateChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void Reload(UWeaponSlotData* Slot);
    
    UFUNCTION(BlueprintPure)
    bool IsOccupied(bool bIncludeDetaching) const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetOccupant(bool bIncludeDetaching) const;
    
    UFUNCTION(BlueprintCallable)
    void AttachSeat(FName AttachSocket, USceneComponent* AttachComponent);
    
    
    // Fix for true pure virtual functions not being implemented
};

