#pragma once
#include "CoreMinimal.h"
#include "CharacterRotateToCommand.h"
#include "CharacterRotateToState.generated.h"

USTRUCT(BlueprintType)
struct FCharacterRotateToState {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCharacterRotateToCommand CommandData;
    
    GBXGAMESYSTEMCORE_API FCharacterRotateToState();
};

