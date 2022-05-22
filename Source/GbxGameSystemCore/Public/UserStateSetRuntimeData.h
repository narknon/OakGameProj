#pragma once
#include "CoreMinimal.h"
#include "UserStateSetRuntimeData.generated.h"

class UByteProperty;
class UGbxCondition;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FUserStateSetRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UByteProperty* Property;
    
    UPROPERTY()
    uint8 ActiveState;
    
    UPROPERTY()
    TArray<UGbxCondition*> EnableConditions;
    
    FUserStateSetRuntimeData();
};

