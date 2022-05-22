#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "DataProviders/AIDataProvider.h"
#include "EQSDynamicPointRange.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvQueryGenerator_DynamicPoints.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class UEnvQueryGenerator_DynamicPoints : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue InnerRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue OuterRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FEQSDynamicPointRange PointsPerRing;
    
    UPROPERTY(EditDefaultsOnly)
    FEQSDynamicPointRange NumberOfRings;
    
    UPROPERTY(EditDefaultsOnly)
    FEQSDynamicPointRange NumberOfLayers;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue TopLayerHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue BottomLayerHeight;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseLayers: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    int32 NumberOfPointsMin;
    
    UPROPERTY(VisibleDefaultsOnly)
    int32 NumberOfPointsMax;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvDirection ArcDirection;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ArcAngle;
    
    UPROPERTY(EditAnywhere)
    uint8 bDefineArc: 1;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> Center;
    
    UEnvQueryGenerator_DynamicPoints();
};

