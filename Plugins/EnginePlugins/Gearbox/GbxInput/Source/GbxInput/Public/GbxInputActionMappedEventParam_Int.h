#pragma once
#include "CoreMinimal.h"
#include "GbxInputActionMappedEventParam.h"
#include "GbxInputActionMappedEventParam_Int.generated.h"

USTRUCT(BlueprintType)
struct GBXINPUT_API FGbxInputActionMappedEventParam_Int : public FGbxInputActionMappedEventParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 Value;
    
public:
    FGbxInputActionMappedEventParam_Int();
};

