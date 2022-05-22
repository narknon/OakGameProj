#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECarnivoraFakeTurretShootingStyle.h"
#include "CarnivoraFakeTurrets.generated.h"

class UGbxDamageType;
class ULightProjectileData;
class AActor;

USTRUCT(BlueprintType)
struct FCarnivoraFakeTurrets {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECarnivoraFakeTurretShootingStyle ShootingStyle;
    
    UPROPERTY(EditAnywhere)
    float MinDelayBetweenBurstWave;
    
    UPROPERTY(EditAnywhere)
    float MinDelayInsideBurstShot;
    
    UPROPERTY(EditAnywhere)
    int32 NbBulletPerBurst;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ULightProjectileData> LightProjectileData;
    
    UPROPERTY(EditAnywhere)
    float ProjectileSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxPrediction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(EditAnywhere)
    float Range;
    
    UPROPERTY(EditAnywhere)
    float DistanceFromPoint;
    
    UPROPERTY(EditAnywhere)
    float MaxAngle;
    
    UPROPERTY(EditAnywhere)
    float DirectHitPct;
    
    UPROPERTY(EditAnywhere)
    float SpreadAngle;
    
    UPROPERTY(EditAnywhere)
    bool DrawDebugProjectileLine;
    
    UPROPERTY()
    AActor* CurrentTargetActor;
    
    OAKGAME_API FCarnivoraFakeTurrets();
};

