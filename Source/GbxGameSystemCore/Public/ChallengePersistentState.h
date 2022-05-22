#pragma once
#include "CoreMinimal.h"
#include "ChallengeStatInstanceData.h"
#include "ChallengePersistentState.generated.h"

class UCustomChallengePersistentState;
class UChallenge;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FChallengePersistentState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UClass* ChallengeClass;
    
    UPROPERTY()
    TSoftClassPtr<UChallenge> ChallengeClassPath;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CompletedCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CompletedProgressLevel;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FChallengeStatInstanceData> StatInstanceState;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsActive;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCurrentlyCompleted;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ProgressCounter;
    
    UPROPERTY(Transient)
    UCustomChallengePersistentState* CustomPersistentData;
    
    FChallengePersistentState();
};

