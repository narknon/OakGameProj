#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakAttachedDrone.h"
#include "EnvQueryParams.h"
#include "OakAttachedDroneAttacker.generated.h"

class ULightProjectileData;
class UGbxDamageType;
class AActor;
class AOakVehicle;

UCLASS(Abstract)
class OAKGAME_API AOakAttachedDroneAttacker : public AOakAttachedDrone {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ULightProjectileData> LightProjectileData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttackDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BurstCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProjectileSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxPrediction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(EditAnywhere)
    FEnvQueryParams QueryParams;
    
public:
    AOakAttachedDroneAttacker();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFire(AOakVehicle* Vehicle, AActor* FiringAtTarget);
    
};

