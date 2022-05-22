#pragma once
#include "CoreMinimal.h"
#include "GbxInputActionMappedEventParam.h"
#include "GbxInputActionMappedEventParam_Float.generated.h"

USTRUCT(BlueprintType)
struct GBXINPUT_API FGbxInputActionMappedEventParam_Float : public FGbxInputActionMappedEventParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float Value;
    
public:
    FGbxInputActionMappedEventParam_Float();
};

