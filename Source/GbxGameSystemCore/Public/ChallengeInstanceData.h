#pragma once
#include "CoreMinimal.h"
#include "ChallengePersistentState.h"
#include "ChallengeInstanceData.generated.h"

class AActor;
class UChallenge;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FChallengeInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* CCOwner;
    
    UPROPERTY(BlueprintReadOnly)
    FChallengePersistentState ChallengeState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UChallenge* ChallengeInstance;
    
    FChallengeInstanceData();
};

