#pragma once
#include "CoreMinimal.h"
#include "GbxAIController.h"
#include "SenseConfigProviderInterface.h"
#include "OakAIController.generated.h"

class UOakNpcGreetingComponent;
class UAIWeaponUserComponent;
class AOakVehicle;
class ASeatPawn;
class AOakCharacter;
class AVehicleSeatPawn;
class UTurretMovementComponent;
class UVehicleSeatComponent;
class ATurretSeatPawn;
class UOakAIActionComponent;
class UOakNavComponent;
class AController;
class APawn;

UCLASS()
class OAKGAME_API AOakAIController : public AGbxAIController, public ISenseConfigProviderInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FExitVehicleEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FExitTurretEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnterVehicleEvent, AOakVehicle*, OakVehicle, int32, SlotIdx);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnterTurretEvent, ASeatPawn*, TurretPawn);
    
protected:
    UPROPERTY(Transient)
    AOakCharacter* OakCharacter;
    
    UPROPERTY(Export, Transient)
    UAIWeaponUserComponent* AIWeaponUserComp;
    
public:
    UPROPERTY(BlueprintAssignable)
    FEnterVehicleEvent EnterVehicleEvent;
    
    UPROPERTY(BlueprintAssignable)
    FExitVehicleEvent ExitVehicleEvent;
    
    UPROPERTY(BlueprintAssignable)
    FEnterTurretEvent EnterTurretEvent;
    
    UPROPERTY(BlueprintAssignable)
    FExitTurretEvent ExitTurretEvent;
    
private:
    UPROPERTY(Transient)
    AOakVehicle* MyVehicle;
    
    UPROPERTY(Transient)
    AVehicleSeatPawn* MyVehicleSeatPawn;
    
    UPROPERTY(Export, Transient)
    UVehicleSeatComponent* MyVehicleSeatComponent;
    
    UPROPERTY(Transient)
    ATurretSeatPawn* TurretSeatPawn;
    
    UPROPERTY(Export, Transient)
    UTurretMovementComponent* TurretMovementComponent;
    
    UPROPERTY(Export, Transient)
    UOakAIActionComponent* OakAIActionComponent;
    
    UPROPERTY(Export, Transient)
    UOakNavComponent* OakNavComponent;
    
    UPROPERTY(Export, Transient)
    UOakNpcGreetingComponent* OakNpcGreetingComponent;
    
public:
    AOakAIController();
    UFUNCTION()
    void OnSeatDetachFinished(APawn* DetachedPawn, AController* DetachedController);
    
    UFUNCTION(BlueprintPure)
    UOakNavComponent* GetOakNavComponent() const;
    
    UFUNCTION(BlueprintPure)
    UOakAIActionComponent* GetOakAIActionComponent() const;
    
    UFUNCTION(BlueprintPure)
    AOakVehicle* GetMyVehicle() const;
    
    UFUNCTION(BlueprintPure)
    ATurretSeatPawn* GetMyTurret() const;
    
    UFUNCTION(BlueprintCallable)
    void EnterVehicle(AOakVehicle* OakVehicle, int32 SlotIdx, bool bInstant, bool bSkipAITreeSetup);
    
    UFUNCTION(BlueprintCallable)
    void EnterTurret(ATurretSeatPawn* TurrentPawn, bool bInstant, bool bSkipAITreeSetup);
    
    
    // Fix for true pure virtual functions not being implemented
};

