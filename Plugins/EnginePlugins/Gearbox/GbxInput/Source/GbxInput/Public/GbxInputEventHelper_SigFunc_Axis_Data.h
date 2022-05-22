#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxInputEventHelper_SigFunc_Axis_Data.generated.h"

USTRUCT()
struct FGbxInputEventHelper_SigFunc_Axis_Data {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Val;
    
    GBXINPUT_API FGbxInputEventHelper_SigFunc_Axis_Data();
};

