#pragma once
#include "CoreMinimal.h"
#include "GbxInputActionMappedEventParam.generated.h"

USTRUCT()
struct GBXINPUT_API FGbxInputActionMappedEventParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName ParamName;
    
public:
    FGbxInputActionMappedEventParam();
};

