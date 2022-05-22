#pragma once
#include "CoreMinimal.h"
#include "GbxFlag.h"
#include "FlagPropertyTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FFlagPropertyTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGbxFlag TestFlag;
    
    GBXGAMESYSTEMCORE_API FFlagPropertyTestStruct();
};

