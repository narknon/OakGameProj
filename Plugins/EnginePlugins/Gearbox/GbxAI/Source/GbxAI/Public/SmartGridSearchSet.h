#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "SmartGridSearchSet.generated.h"

class UEnvQueryContext;

USTRUCT(BlueprintType)
struct FSmartGridSearchSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SetName;
    
    UPROPERTY(EditAnywhere)
    int32 MaxPoints;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> Center;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyGenerateDensePoints;
    
    UPROPERTY(EditAnywhere)
    FAIDataProviderFloatValue InnerRadius;
    
    UPROPERTY(EditAnywhere)
    FAIDataProviderFloatValue OuterRadius;
    
    UPROPERTY(EditAnywhere)
    uint8 bDefineArc: 1;
    
    UPROPERTY(EditAnywhere)
    FEnvDirection ArcDirection;
    
    UPROPERTY(EditAnywhere)
    FAIDataProviderFloatValue ArcAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float PointSeparationDistanceNormal;
    
    UPROPERTY(EditAnywhere)
    float PointSeparationDistanceDenseSpots;
    
    UPROPERTY(EditAnywhere)
    float RadiusApplyDenserSeparation;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> DenseSpotProvider;
    
    GBXAI_API FSmartGridSearchSet();
};

