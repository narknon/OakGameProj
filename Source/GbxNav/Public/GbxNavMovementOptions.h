#pragma once
#include "CoreMinimal.h"
#include "GbxNavPathingData.h"
#include "EGbxNavMoveStyleDefault.h"
#include "GbxNavMovementOptions.generated.h"

class UHavokPathFindingData;

USTRUCT(BlueprintType)
struct FGbxNavMovementOptions {
    GENERATED_BODY()
public:
    UPROPERTY()
    UHavokPathFindingData* PathFindingData;
    
    UPROPERTY(EditAnywhere)
    FGbxNavPathingData PathingData;
    
    UPROPERTY(EditAnywhere)
    EGbxNavMoveStyleDefault MoveStyleDefault;
    
    UPROPERTY(EditAnywhere)
    bool bCanReverse;
    
    UPROPERTY(EditAnywhere)
    float ReverseGoalDistance;
    
    UPROPERTY(EditAnywhere)
    bool bCanChangePitchWhenStrafeFlying;
    
    UPROPERTY(EditAnywhere)
    float IdleDirectionTime;
    
    UPROPERTY(EditAnywhere)
    float NearUserEdgeTimeThreshold;
    
    UPROPERTY(EditAnywhere)
    float UserEdgeEnterDistancePercent;
    
    UPROPERTY(EditAnywhere)
    bool bMustBeFacingUserEdgeBeforeEntering;
    
    GBXNAV_API FGbxNavMovementOptions();
};

