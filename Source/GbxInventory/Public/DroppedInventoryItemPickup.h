#pragma once
#include "CoreMinimal.h"
#include "InventoryItemPickup.h"
#include "Engine/NetSerialization.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "DroppedInventoryItemPickup.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class GBXINVENTORY_API ADroppedInventoryItemPickup : public AInventoryItemPickup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float LinearDamping;
    
    UPROPERTY(EditAnywhere)
    float NextImpactDistanceThreshold;
    
    UPROPERTY(EditAnywhere)
    float NextImpactTimeThreshold;
    
    UPROPERTY(EditAnywhere)
    float ImpactVelocityThreshold;
    
    UPROPERTY(Transient)
    float DefaultVelocity;
    
    UPROPERTY(Transient)
    FVector_NetQuantize10 DefaultAngularVelocity;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_InitialMassScale)
    float InitialMassScale;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DroppedQuantity)
    int32 DroppedQuantity;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ShrinkLifeSpan)
    float ShrinkLifeSpan;
    
public:
    UPROPERTY(Replicated)
    bool bDroppedFromPlayerInventory;
    
    ADroppedInventoryItemPickup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_ShrinkLifeSpan();
    
    UFUNCTION()
    void OnRep_InitialMassScale();
    
    UFUNCTION()
    void OnRep_DroppedQuantity();
    
    UFUNCTION()
    void OnPickupHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
private:
    UFUNCTION()
    void OnPhysicsWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION()
    void OnPhysicsSleep(UPrimitiveComponent* WakingComponent, FName BoneName);
    
};

