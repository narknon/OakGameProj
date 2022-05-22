#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "EGbxFlagEval.h"
#include "GbxFlagEval.generated.h"

class UGbxFlagData;

USTRUCT(BlueprintType)
struct FGbxFlagEval {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UGbxFlagData* FlagData;
    
    UPROPERTY(EditAnywhere)
    EGbxFlagEval EvalType;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData TimeSeconds;
    
public:
    GBXGAMESYSTEMCORE_API FGbxFlagEval();
};

