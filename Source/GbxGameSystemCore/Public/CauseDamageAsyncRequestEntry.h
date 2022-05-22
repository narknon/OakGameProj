#pragma once
#include "CoreMinimal.h"
#include "CauseDamageAsyncRequest.h"
#include "DamageTargetResult.h"
#include "CauseDamageAsyncRequestEntry.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCauseDamageAsyncRequestEntry : public FCauseDamageAsyncRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FDamageTargetResult> Results;
    
    FCauseDamageAsyncRequestEntry();
};

