#pragma once
#include "CoreMinimal.h"
#include "UseDefinitionConditional.h"
#include "UseDefSelection.generated.h"

class UUsableTypeDefinition;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FUseDefSelection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverrideDefaultUseDefinition: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideConditionalDefs: 1;
    
    UPROPERTY(EditAnywhere)
    UUsableTypeDefinition* DefaultUseDefinition;
    
    UPROPERTY(EditAnywhere)
    TArray<FUseDefinitionConditional> ConditionalUseDefs;
    
    FUseDefSelection();
};

