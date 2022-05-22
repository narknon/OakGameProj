#pragma once
#include "CoreMinimal.h"
#include "RubberbandSpeedData.h"
#include "GbxNavComponent.h"
#include "OakNavReverseState.h"
#include "OakVehicleNavCorrecter.h"
#include "StuckTeleport.h"
#include "UObject/NoExportTypes.h"
#include "ESpeedModifierOverridePriority.h"
#include "EDrivingOverridePriority.h"
#include "OakNavComponent.generated.h"

class UVehicleDrivingDataAsset;
class ASeatPawn;
class AOakVehicle;
class UAIVehicleFlightComponent;
class AOakAIController;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakNavComponent : public UGbxNavComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UVehicleDrivingDataAsset* DrivingData;
    
private:
    UPROPERTY(Transient)
    AOakVehicle* MyVehicle;
    
    UPROPERTY(Export, Transient)
    UAIVehicleFlightComponent* MyVehicleFlight;
    
    UPROPERTY(Transient)
    ASeatPawn* MyTurret;
    
    UPROPERTY(Transient)
    AOakAIController* MyOakAIController;
    
    UPROPERTY(EditAnywhere)
    FOakNavReverseState ReverseState;
    
    UPROPERTY(Transient)
    FOakVehicleNavCorrecter OakVehicleNavCorrecter;
    
public:
    UOakNavComponent();
    UFUNCTION(BlueprintCallable)
    bool TeleportVehicleToGoal();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowDebugVehicleNav(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable)
    static void SetStuckTeleport(AActor* Actor, FStuckTeleport StuckTeleport);
    
    UFUNCTION(BlueprintCallable)
    void SetScriptedMoveTo(const FVector& Location, const FVector& EntryLocation, float ReachRadius, float WantedSpeed, bool bMaxSpeed, bool bUseBoost, float Duration, float DotDestination, bool bGoBackward);
    
    UFUNCTION(BlueprintPure)
    float GetDesiredSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSpeedOverride(ESpeedModifierOverridePriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void ClearScriptedMoveTo();
    
    UFUNCTION(BlueprintCallable)
    void ClearDrivingOverride(EDrivingOverridePriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AddSpeedRubberbandOverride(FRubberbandSpeedData InRubberbandSpeedData, ESpeedModifierOverridePriority Priority, float WantedSpeed, bool bUseBoost, bool bForceReverse, bool bForceHandbrake, float SteeringValue, float Duration, float SpeedHack, bool bGoBackward);
    
    UFUNCTION(BlueprintCallable)
    void AddSpeedOverride(ESpeedModifierOverridePriority Priority, float WantedSpeed, bool bMaxSpeed, bool bUseBoost, bool bForceReverse, bool bForceHandbrake, float SteeringValue, float Duration, float SpeedHack, bool bGoBackward);
    
    UFUNCTION(BlueprintCallable)
    void AddDrivingOverride(EDrivingOverridePriority Priority, bool bDisableTurnHandBrake);
    
};

