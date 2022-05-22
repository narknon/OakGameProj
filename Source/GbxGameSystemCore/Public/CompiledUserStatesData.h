#pragma once
#include "CoreMinimal.h"
#include "CompiledUserSet.h"
#include "CompiledUserStatesData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCompiledUserStatesData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCompiledUserSet> CompiledSets;
    
    FCompiledUserStatesData();
};

