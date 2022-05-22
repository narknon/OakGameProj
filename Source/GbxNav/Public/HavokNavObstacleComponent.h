#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "HavokNavObstacleComponent.generated.h"

class UHavokNavObstacle;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UHavokNavObstacleComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, NoClear)
    UHavokNavObstacle* Obstacle;
    
public:
    UHavokNavObstacleComponent();
    UFUNCTION(BlueprintCallable)
    void UnlockObstacle(FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void LockObstacle(FName Reason);
    
};

