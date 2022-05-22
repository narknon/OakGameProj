#pragma once
#include "CoreMinimal.h"
#include "OnActorComponentAppliedFromAspectDataDelegate.h"
#include "GameFramework/Pawn.h"
#include "GenericTeamAgentInterface.h"
#include "SignificanceInterface.h"
#include "Vehicle.generated.h"

class UTargetingComponent;
class USkeletalMeshComponent;
class UDamageComponent;
class UTargetableComponent;
class UVehicleMovementInterface;
class IVehicleMovementInterface;
class UDamageCauserComponent;
class UVehiclePartSelectionData;
class UVehiclePartData;
class UTeam;
class UTeamComponent;

UCLASS()
class GBXVEHICLE_API AVehicle : public APawn, public IGenericTeamAgentInterface, public ISignificanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    TScriptInterface<IVehicleMovementInterface> VehicleMovement;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUnpushable;
    
    UPROPERTY(BlueprintAssignable)
    FOnActorComponentAppliedFromAspectData OnActorComponentAppliedFromAspectData;
    
protected:
    UPROPERTY(Export, Transient)
    UTargetableComponent* CachedTargetableComponent;
    
    UPROPERTY(Export, Transient)
    UDamageComponent* CachedDamageComponent;
    
    UPROPERTY(Export, Transient)
    UDamageCauserComponent* CachedDamageCauserComponent;
    
    UPROPERTY(Export, Transient)
    UTargetingComponent* CachedTargetingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UVehiclePartSelectionData* VehiclePartSelectionData;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_VehicleParts)
    TArray<UVehiclePartData*> VehicleParts;
    
    UPROPERTY(EditAnywhere)
    float CharacterCollidingResistance;
    
public:
    AVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTeam(UTeam* Team) const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveVehiclePart(UVehiclePartData* CharacterPart);
    
protected:
    UFUNCTION()
    void OnRep_VehicleParts();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPowerSliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintPure)
    UTeamComponent* GetTeamComponent() const;
    
    UFUNCTION(BlueprintPure)
    UTeam* GetTeam() const;
    
    UFUNCTION(BlueprintPure)
    UTargetingComponent* GetTargetingComponent() const;
    
    UFUNCTION(BlueprintPure)
    UTargetableComponent* GetTargetableComponent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumWheelsInAir() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UVehiclePartData*> GetEquipedParts() const;
    
    UFUNCTION(BlueprintCallable)
    void AddVehiclePart(UVehiclePartData* CharacterPart);
    
    
    // Fix for true pure virtual functions not being implemented
};

