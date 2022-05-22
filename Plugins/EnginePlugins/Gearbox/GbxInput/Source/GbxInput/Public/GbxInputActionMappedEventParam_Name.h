#pragma once
#include "CoreMinimal.h"
#include "GbxInputActionMappedEventParam.h"
#include "GbxInputActionMappedEventParam_Name.generated.h"

USTRUCT(BlueprintType)
struct GBXINPUT_API FGbxInputActionMappedEventParam_Name : public FGbxInputActionMappedEventParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName Value;
    
public:
    FGbxInputActionMappedEventParam_Name();
};

