#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "VehicleHitchComponent.generated.h"

class AVehicle;
class UVehicleHitchAttachPtComponent;
class AActor;
class UWheeledVehicleMovementComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=GbxVehicle, meta=(BlueprintSpawnableComponent))
class GBXVEHICLE_API UVehicleHitchComponent : public UPhysicsConstraintComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHitchAttachAction, AVehicle*, FromVehicle);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCheckAutoAttach;
    
private:
    UPROPERTY(BlueprintAssignable)
    FHitchAttachAction OnStartAttachTransition;
    
    UPROPERTY(BlueprintAssignable)
    FHitchAttachAction OnAttached;
    
    UPROPERTY(BlueprintAssignable)
    FHitchAttachAction OnDetached;
    
    UPROPERTY(EditAnywhere)
    float HitchAttachCheckRadius;
    
    UPROPERTY(EditAnywhere)
    float YawLimit;
    
    UPROPERTY(EditAnywhere)
    float PitchLimit;
    
    UPROPERTY(EditAnywhere)
    float HitchConstraintStiffness;
    
    UPROPERTY(EditAnywhere)
    float HitchConstraintDamping;
    
    UPROPERTY(Export, Transient)
    UVehicleHitchAttachPtComponent* AttachedPoint;
    
    UPROPERTY(Transient)
    AVehicle* OwningVehicle;
    
    UPROPERTY(Export, Transient)
    UWheeledVehicleMovementComponent* OwningVehicleMovementComp;
    
public:
    UVehicleHitchComponent();
    UFUNCTION(BlueprintCallable)
    void TeleportTrailerAndAttachToHitch(AActor* TrailerToAttach);
    
    UFUNCTION(BlueprintCallable)
    void DetachFromHitch();
    
    UFUNCTION(BlueprintCallable)
    void AttachToHitch(UVehicleHitchAttachPtComponent* AttachPtToAttach);
    
};

