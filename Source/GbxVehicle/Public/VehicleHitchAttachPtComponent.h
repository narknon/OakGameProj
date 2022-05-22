#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "VehicleHitchAttachPtComponent.generated.h"

class UPrimitiveComponent;
class AVehicle;
class UWheeledVehicleMovementComponentNW;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=GbxVehicle, meta=(BlueprintSpawnableComponent))
class GBXVEHICLE_API UVehicleHitchAttachPtComponent : public USphereComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHitchAttachAction, AVehicle*, FromVehicle);
    
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* UpdatedPrimitive;
    
    UPROPERTY(EditAnywhere)
    float AttachTransitionLength;
    
    UPROPERTY(EditAnywhere)
    float AttachTransitionTolerance;
    
private:
    UPROPERTY(EditAnywhere)
    float BrakeTorque;
    
    UPROPERTY(BlueprintAssignable)
    FHitchAttachAction OnStartAttachTransition;
    
    UPROPERTY(BlueprintAssignable)
    FHitchAttachAction OnAttached;
    
    UPROPERTY(BlueprintAssignable)
    FHitchAttachAction OnDetached;
    
    UPROPERTY(Export, Transient)
    UWheeledVehicleMovementComponentNW* CachedAttachedVehicleMovementComp;
    
    UPROPERTY(Export, Transient)
    UWheeledVehicleMovementComponentNW* CachedMovementComponent;
    
public:
    UVehicleHitchAttachPtComponent();
    UFUNCTION(BlueprintPure)
    bool IsAttached() const;
    
};

