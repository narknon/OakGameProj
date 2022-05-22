#pragma once
#include "CoreMinimal.h"
#include "WalkingProjectileMovementComponent.h"
#include "TireProjectileMovementComponent.generated.h"

class USceneComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTireProjectileMovementComponent : public UWalkingProjectileMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    USceneComponent* MeshToRotate;
    
public:
    UTireProjectileMovementComponent();
};

