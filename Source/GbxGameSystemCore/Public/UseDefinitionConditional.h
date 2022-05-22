#pragma once
#include "CoreMinimal.h"
#include "UseDefinitionConditional.generated.h"

class UUsableTypeDefinition;
class UGbxCondition;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FUseDefinitionConditional {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UUsableTypeDefinition* UseDefinition;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* UseCondition;
    
    FUseDefinitionConditional();
};

