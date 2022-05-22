#pragma once
#include "CoreMinimal.h"
#include "ChallengeInWorldIconQueueEntry.generated.h"

class UChallengeLevelActorComponent;
class AGbxPlayerController;

USTRUCT(BlueprintType)
struct FChallengeInWorldIconQueueEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UChallengeLevelActorComponent* LevelActorComponent;
    
    UPROPERTY(Transient)
    AGbxPlayerController* PlayerToRegister;
    
    OAKGAME_API FChallengeInWorldIconQueueEntry();
};

