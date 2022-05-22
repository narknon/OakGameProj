#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxInputEventHelper_SigFunc_OakMoveLookAxis_Data.generated.h"

USTRUCT()
struct FGbxInputEventHelper_SigFunc_OakMoveLookAxis_Data {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Val;
    
    UPROPERTY()
    bool bGamePad;
    
    OAKGAME_API FGbxInputEventHelper_SigFunc_OakMoveLookAxis_Data();
};

