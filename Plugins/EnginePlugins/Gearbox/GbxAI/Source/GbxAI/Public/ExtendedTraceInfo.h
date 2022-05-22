#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DataProviders/AIDataProvider.h"
#include "EUberTraceMultiTraceRequirement.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "GbxParam.h"
#include "ExtendedTraceInfo.generated.h"

class UEnvQueryContext;

USTRUCT(BlueprintType)
struct FExtendedTraceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString ReadableName;
    
    UPROPERTY(EditDefaultsOnly)
    FString TestComment;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDoArcTrace;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ArcSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ArcAnglePercent;
    
    UPROPERTY(EditAnywhere)
    int32 NumSegments;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvTraceData TraceData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    EUberTraceMultiTraceRequirement MultipleContextRequirement;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxScoreIfFails;
    
    UPROPERTY(EditDefaultsOnly)
    float MinScoreIfSucceeds;
    
    UPROPERTY(EditDefaultsOnly)
    bool bStopIfSucceeds;
    
    UPROPERTY(EditDefaultsOnly)
    bool bStopIfFails;
    
    UPROPERTY(EditDefaultsOnly)
    FGbxParam PassTestIfTrue;
    
    UPROPERTY(EditDefaultsOnly)
    FGbxParam FailTestIfTrue;
    
    GBXAI_API FExtendedTraceInfo();
};

