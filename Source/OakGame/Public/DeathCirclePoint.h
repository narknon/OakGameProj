#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeathCirclePoint.generated.h"

class ADeathCirclePoint;

UCLASS(MinimalAPI)
class ADeathCirclePoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Stage;
    
    UPROPERTY(EditAnywhere)
    TArray<ADeathCirclePoint*> NextCircleOptions;
    
    ADeathCirclePoint();
    UFUNCTION()
    void GetNextStageDeathCirclePoints(TArray<ADeathCirclePoint*>& NextStageDeathCirclePoints) const;
    
};

