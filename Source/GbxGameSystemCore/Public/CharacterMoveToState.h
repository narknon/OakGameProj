#pragma once
#include "CoreMinimal.h"
#include "CharacterMoveToCommand.h"
#include "CharacterMoveToState.generated.h"

USTRUCT(BlueprintType)
struct FCharacterMoveToState {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCharacterMoveToCommand CommandData;
    
    GBXGAMESYSTEMCORE_API FCharacterMoveToState();
};

