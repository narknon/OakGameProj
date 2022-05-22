#pragma once
#include "CoreMinimal.h"
#include "CharacterVocalLoop.generated.h"

class UWwiseEvent;
class UGbxCondition;

USTRUCT()
struct FCharacterVocalLoop {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StartEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StopEvent;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* WhileCondition;
    
    UPROPERTY(EditAnywhere)
    bool bPainLoop;
    
    GBXAUDIO_API FCharacterVocalLoop();
};

