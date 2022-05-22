#pragma once
#include "CoreMinimal.h"
#include "RubberbandSpeedData.generated.h"

class AActor;
class USplineComponent;

USTRUCT(BlueprintType)
struct FRubberbandSpeedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<AActor> RubberBandTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDistanceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistanceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBehindOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* SplineReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SplineDistanceOffset;
    
    UPROPERTY()
    bool bUseSpline;
    
    UPROPERTY(Export)
    USplineComponent* CachedSplineComponent;
    
    OAKGAME_API FRubberbandSpeedData();
};

