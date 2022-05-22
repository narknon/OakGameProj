#pragma once
#include "CoreMinimal.h"
#include "CharacterScriptedMeshOffsetCommand.h"
#include "CharacterScriptedMeshOffsetState.generated.h"

USTRUCT(BlueprintType)
struct FCharacterScriptedMeshOffsetState {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCharacterScriptedMeshOffsetCommand Cmd;
    
    GBXGAMESYSTEMCORE_API FCharacterScriptedMeshOffsetState();
};

