#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterVocalLoopImplementation.generated.h"

class UGbxCondition;
class UWwiseEvent;

USTRUCT(BlueprintType)
struct FCharacterVocalLoopImplementation {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bOriginator;
    
    UPROPERTY(EditAnywhere)
    FName LoopName;
    
    UPROPERTY(EditAnywhere)
    bool bPainLoop;
    
    UPROPERTY()
    FGuid LoopID;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideConditions;
    
    UPROPERTY()
    FGuid ConditionID;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    bool bPlayOnce;
    
    UPROPERTY(EditAnywhere)
    float StopTryingToRunAfterXSeconds;
    
    UPROPERTY()
    FGuid WhileConditionID;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* WhileCondition;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideAudio;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StartEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StopEvent;
    
    GBXAUDIO_API FCharacterVocalLoopImplementation();
};

