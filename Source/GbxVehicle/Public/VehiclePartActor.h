#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VehiclePartActor.generated.h"

class AVehicle;

UCLASS()
class GBXVEHICLE_API AVehiclePartActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bWeldSimulatedBodies;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWeldedBodiesShouldModifyPhysicalProperties;
    
    UPROPERTY(EditDefaultsOnly)
    bool bForwardDamageToParent;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_OwningVehicle, meta=(AllowPrivateAccess=true))
    AVehicle* OwningVehicle;
    
    UPROPERTY(ReplicatedUsing=OnRep_ParentSocket)
    FName ParentSocket;
    
public:
    AVehiclePartActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void WeldActorToVehicle(AActor* SpawnedPart);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveParentVehicleBeginPlay();
    
private:
    UFUNCTION()
    void OnRep_ParentSocket();
    
    UFUNCTION()
    void OnRep_OwningVehicle();
    
};

