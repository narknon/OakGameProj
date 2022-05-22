#pragma once
#include "CoreMinimal.h"
#include "ConditionalEchoData.generated.h"

class UGbxCondition;
class UCharacterEchoDataBase;

USTRUCT(BlueprintType)
struct FConditionalEchoData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere, Instanced)
    UCharacterEchoDataBase* EchoData;
    
    GBXDIALOG_API FConditionalEchoData();
};

