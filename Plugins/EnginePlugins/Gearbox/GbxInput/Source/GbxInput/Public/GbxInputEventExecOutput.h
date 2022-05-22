#pragma once
#include "CoreMinimal.h"
#include "GbxInputEventExecOutput_FastPath.h"
#include "GbxInputEventExecOutput.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FGbxInputEventExecOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName EventName;
    
    UPROPERTY()
    FName ExecFunctionName;
    
    UPROPERTY()
    bool bIsBound;
    
    UPROPERTY()
    FGbxInputEventExecOutput_FastPath FastPathData;
    
    UPROPERTY(Transient)
    UFunction* ExecFunction;
    
    GBXINPUT_API FGbxInputEventExecOutput();
};

