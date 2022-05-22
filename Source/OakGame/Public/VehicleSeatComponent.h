#pragma once
#include "CoreMinimal.h"
#include "OakPawnAttachSlotComponent.h"
#include "EFollowVehicleRotation.h"
#include "PawnDetachTransition.h"
#include "UseCharacterWeaponSettings.h"
#include "VehicleSeatComponent.generated.h"

class AActor;
class AOakVehicle;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVehicleSeatComponent : public UOakPawnAttachSlotComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SeatSlot;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Replicated)
    int32 AdjacentSeatSlot;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bSkipExitTransitionWhenFlipped;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AOakVehicle* Vehicle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 TransitionSeatSlot;
    
    UPROPERTY(EditAnywhere)
    bool bUseVehicleAimSettings;
    
    UPROPERTY(EditAnywhere)
    bool bAffectVehicleTeam;
    
    UPROPERTY(EditAnywhere)
    bool bCrouchWhenSeated;
    
    UPROPERTY(EditAnywhere)
    bool bNotUsableByEnemies;
    
    UPROPERTY(EditAnywhere)
    EFollowVehicleRotation FollowVehicleRotation;
    
    UPROPERTY(EditAnywhere)
    bool bForcePawnIgnoreControllerRotationOnTransition;
    
    UPROPERTY(EditAnywhere)
    bool bForcePawnUseAllControllerRotationWhileAttached;
    
    UPROPERTY(EditAnywhere)
    bool bAllowRootMotionWhileAttached;
    
    UPROPERTY(EditAnywhere)
    bool bHideFirstPersonLegsWhileAttached;
    
    UPROPERTY(EditAnywhere)
    bool bDisableHandToWeaponAlpha;
    
    UPROPERTY(EditAnywhere)
    bool bIsUsingBaseAnimation;
    
    UPROPERTY(EditAnywhere)
    FName HideFirstPersonLegsReason;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Replicated)
    bool bCanBeSwitchedTo;
    
    UPROPERTY(EditAnywhere)
    bool bPlaySafePlaceTransitionWhenNoDetachTransitionFound;
    
    UPROPERTY(EditAnywhere)
    FPawnDetachTransition DetachToSafePlaceTransition;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOptimizeInteractBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUseCharacterWeaponSettings UseCharacterWeapon;
    
    UPROPERTY()
    bool bUseCharacterWeapon;
    
    UPROPERTY(EditAnywhere)
    float AdditiveMovementScale;
    
    UPROPERTY(EditAnywhere)
    float AdditiveSpeedScale;
    
    UVehicleSeatComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ReserveSeat(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RequestSwitchSeats();
    
    UFUNCTION(BlueprintCallable)
    bool IsReservedBy(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool IsReserved();
    
    UFUNCTION(BlueprintPure)
    bool CanUseCharacterWeapon() const;
    
};

