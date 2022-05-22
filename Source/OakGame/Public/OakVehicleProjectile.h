#pragma once
#include "CoreMinimal.h"
#include "OakProjectile.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "OakVehicleProjectile.generated.h"

class UPrimitiveComponent;
class USphereComponent;
class AActor;
class AOakVehicle;
class UStaticMeshComponent;
class UOakProjectileVehicleData;
class UGbxProjectileMovementComponent;

UCLASS()
class AOakVehicleProjectile : public AOakProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FuseTime;
    
    UPROPERTY(EditAnywhere)
    float InitOverlapTime;
    
protected:
    UPROPERTY(Transient)
    AOakVehicle* Vehicle;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* MeshProjectile;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGbxProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* ProximityDetector;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* MainCollision;
    
    UPROPERTY(Transient)
    UOakProjectileVehicleData* ProjectileData;
    
public:
    AOakVehicleProjectile();
protected:
    UFUNCTION()
    void ProximityDetectorOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void ProximityDetectorHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

