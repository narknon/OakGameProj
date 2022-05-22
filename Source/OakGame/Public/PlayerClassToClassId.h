#pragma once
#include "CoreMinimal.h"
#include "PlayerClassToClassId.generated.h"

USTRUCT(BlueprintType)
struct FPlayerClassToClassId {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PlayerClassName;
    
    UPROPERTY()
    uint32 ClassId;
    
    OAKGAME_API FPlayerClassToClassId();
};

