#pragma once
#include "CoreMinimal.h"
#include "GbxInputActionMappedEventParam.h"
#include "GbxInputActionMappedEventParam_String.generated.h"

USTRUCT(BlueprintType)
struct GBXINPUT_API FGbxInputActionMappedEventParam_String : public FGbxInputActionMappedEventParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString Value;
    
public:
    FGbxInputActionMappedEventParam_String();
};

