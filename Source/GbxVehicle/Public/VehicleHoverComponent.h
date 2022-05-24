#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Curves/CurveFloat.h"
#include "ReplicatedHoverComponentState.h"
#include "UObject/NoExportTypes.h"
#include "VehicleHoverComponent.generated.h"

class AVehicle;
class UTireConfig;
class UWheeledVehicleMovementComponentNW;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, Config=GbxVehicle, meta=(BlueprintSpawnableComponent))
class GBXVEHICLE_API UVehicleHoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVehicleHoverEvent);
    
    UPROPERTY(BlueprintAssignable)
    FVehicleHoverEvent OnHoverEnabled;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleHoverEvent OnHoverDisabled;
    
    UPROPERTY(BlueprintReadOnly)
    float RawStrafeInput;
    
    UPROPERTY(BlueprintReadOnly)
    float RawForwardInput;
    
private:
    UPROPERTY(Replicated, Transient)
    FReplicatedHoverComponentState ReplicatedState;
    
    UPROPERTY(EditAnywhere)
    float ForceRefVel;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ForceCurve;
    
    UPROPERTY(EditAnywhere)
    float DampingForce;
    
    UPROPERTY(EditAnywhere)
    float BrakingDampingForce;
    
    UPROPERTY(EditAnywhere)
    UTireConfig* TireConfigWhenStrafing;
    
    UPROPERTY(EditAnywhere)
    float CustomGravityModifier;
    
    UPROPERTY(EditAnywhere)
    bool bFaceControlRotation;
    
    UPROPERTY(EditAnywhere)
    float TimeToFaceControlRotation;
    
    UPROPERTY(Transient)
    AVehicle* Vehicle;
    
    UPROPERTY(Export, Transient)
    UWheeledVehicleMovementComponentNW* MovementComponentNW;
    
public:
    UVehicleHoverComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateState(bool InbIsEnabled, float InStrafeInput, float InForwardInput, FRotator InTargetRotation);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsHoverEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableHover(bool bEnable);
    
};

