#pragma once
#include "CoreMinimal.h"
#include "OakWeapon_Vehicle.h"
#include "OnSecondaryActionInDelegate.h"
#include "OnSecondaryActionOutDelegate.h"
#include "OakWeaponVehicleByDataAsset.generated.h"

class AOakVehicle;
class UOakDamageComponent;
class USkeletalMeshComponent;

UCLASS()
class AOakWeaponVehicleByDataAsset : public AOakWeapon_Vehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USkeletalMeshComponent* WeaponMesh3P;
    
    UPROPERTY(EditAnywhere, Export)
    UOakDamageComponent* OakDamage;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    USkeletalMeshComponent* LeftWeaponMesh3P;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    USkeletalMeshComponent* RightWeaponMesh3P;
    
    UPROPERTY(BlueprintAssignable)
    FOnSecondaryActionIn OnSecondaryActionIn;
    
    UPROPERTY(BlueprintAssignable)
    FOnSecondaryActionOut OnSecondaryActionOut;
    
    UPROPERTY(Transient)
    AOakVehicle* Vehicle;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SecondaryUse)
    uint8 bIsSecondaryInUse: 1;
    
public:
    AOakWeaponVehicleByDataAsset();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void StopIdleEffects();
    
    UFUNCTION()
    void StartIdleEffects();
    
    UFUNCTION()
    void OnRep_SecondaryUse();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSecondaryInUse();
    
};

