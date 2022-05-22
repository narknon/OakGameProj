#pragma once
#include "CoreMinimal.h"
#include "EScriptedLadderType.h"
#include "LadderAnimState.generated.h"

USTRUCT(BlueprintType)
struct FLadderAnimState {
    GENERATED_BODY()
public:
    UPROPERTY()
    EScriptedLadderType PendingType;
    
    UPROPERTY()
    EScriptedLadderType CurrentType;
    
    GBXGAMESYSTEMCORE_API FLadderAnimState();
};

