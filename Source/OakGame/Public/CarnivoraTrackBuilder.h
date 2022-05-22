#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CarnivoraTrackBuilder.generated.h"

class USplineComponent;

UCLASS()
class OAKGAME_API ACarnivoraTrackBuilder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    USplineComponent* BuilderSpline;
    
    UPROPERTY(Export)
    USplineComponent* BodySpline;
    
    UPROPERTY(EditAnywhere)
    float TreadHeightOffset;
    
    UPROPERTY(Export)
    USplineComponent* LeftTreadSpline;
    
    UPROPERTY(Export)
    USplineComponent* RightTreadSpline;
    
    UPROPERTY(EditAnywhere)
    float TreadSideOffset;
    
    UPROPERTY(EditAnywhere)
    float TreadTraceRadius;
    
    UPROPERTY(EditAnywhere)
    float BodyTraceRadius;
    
    UPROPERTY(EditAnywhere)
    float TraceHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float TraceSpacing;
    
    UPROPERTY(EditInstanceOnly)
    TSoftObjectPtr<AActor> LandscapeToSnapTo;
    
    ACarnivoraTrackBuilder();
};

