#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "MineCart.generated.h"

class USplineMovementComponentDoubleLinked;
class UPrimitiveComponent;
class UHavokNavObstacleComponent;

UCLASS(Abstract)
class AMineCart : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineMovementComponentDoubleLinked* SplineMovementComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHavokNavObstacleComponent* HavokNavObstacleComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPrimitiveComponent* PrimitiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CharacterImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanBePushedByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldCheckCollision;
    
    AMineCart();
private:
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

