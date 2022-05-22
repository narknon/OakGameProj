#pragma once
#include "CoreMinimal.h"
#include "GbxInputEventExecOutput_FastPath.generated.h"

class UGbxInputActionData;

USTRUCT(BlueprintType)
struct FGbxInputEventExecOutput_FastPath {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bUsesFastpath;
    
    UPROPERTY()
    UGbxInputActionData* DirectActionData;
    
    UPROPERTY()
    bool bConsumeEvent;
    
    GBXINPUT_API FGbxInputEventExecOutput_FastPath();
};

