#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "CarnivoraCannon.generated.h"

class USkeletalMeshComponent;
class UStaticMesh;
class ACarnivora;
class UStaticMeshComponent;
class USplineFollowerComponent;

UCLASS()
class OAKGAME_API ACarnivoraCannon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    USkeletalMeshComponent* CannonMeshComponent;
    
    UPROPERTY(EditAnywhere)
    FName ShellBoneName;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* Shell;
    
    UPROPERTY(Export)
    UStaticMeshComponent* ShellComponent;
    
    UPROPERTY()
    AActor* Cannon;
    
    UPROPERTY()
    ACarnivora* Carnivora;
    
    UPROPERTY(Export)
    USplineFollowerComponent* SplineFollower;
    
    UPROPERTY(BlueprintReadWrite)
    float AimingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> ProjectileClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ShellClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfProjectile;
    
    UPROPERTY(EditAnywhere)
    float FrontStartingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HorizontalDispersionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VerticalToHorizontalDispersionRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ProjectileSpreadAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ProjectileSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector ShellAngularVelocity;
    
    UPROPERTY(EditAnywhere)
    float ShellLinearVelocity;
    
    UPROPERTY(EditAnywhere)
    float TargetDistanceAheadOnSpline;
    
    ACarnivoraCannon();
    UFUNCTION(BlueprintCallable)
    AActor* GetCannon();
    
    UFUNCTION(BlueprintCallable)
    void FireCannon();
    
};

