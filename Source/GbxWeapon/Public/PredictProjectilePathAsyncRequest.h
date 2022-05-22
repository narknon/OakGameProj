#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Kismet/GameplayStaticsTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EGbxTraceAsyncMode -FallbackName=EGbxTraceAsyncMode
#include "PredictProjectilePathAsyncDelegateDelegate.h"
#include "PredictProjectilePathAsyncRequest.generated.h"

USTRUCT(BlueprintType)
struct FPredictProjectilePathAsyncRequest : public FPredictProjectilePathParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGbxTraceAsyncMode TraceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EObjectTypeQuery> ObjectType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FName TraceName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FPredictProjectilePathAsyncDelegate Finished;
    
    GBXWEAPON_API FPredictProjectilePathAsyncRequest();
};

