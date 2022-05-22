#pragma once
#include "CoreMinimal.h"
#include "OakWeapon.h"
#include "VehicleWeapons.h"
#include "OakWeapon_Vehicle.generated.h"

class UOakWeaponVehicleData;
class AController;
class APawn;

UCLASS()
class AOakWeapon_Vehicle : public AOakWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    int32 PreferredSlotId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    VehicleWeapons VehicleWeapon;
    
protected:
    UPROPERTY(EditAnywhere, Replicated)
    UOakWeaponVehicleData* DataAsset;
    
public:
    AOakWeapon_Vehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnPawnDetachedFromWeapon(APawn* Pawn, AController* Controller);
    
};

