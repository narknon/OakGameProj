#pragma once
#include "CoreMinimal.h"
#include "ChallengeMinimapIcon.h"
#include "ChallengeManager.h"
#include "ChallengeInWorldIcon.h"
#include "ChallengeInWorldIconQueueEntry.h"
#include "OakChallengeManager.generated.h"

class UGFxInWorldIconContainer;
class UGFxMinimapWidget;

UCLASS()
class OAKGAME_API AOakChallengeManager : public AChallengeManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UGFxInWorldIconContainer*> IconContainers;
    
    UPROPERTY(Transient)
    TArray<UGFxMinimapWidget*> MinimapWidgets;
    
    UPROPERTY(Transient)
    TArray<FChallengeInWorldIcon> ChallengeInWorldIcons;
    
    UPROPERTY(Transient)
    TArray<FChallengeMinimapIcon> ChallengeMinimapIcons;
    
    UPROPERTY(Transient)
    TArray<FChallengeInWorldIconQueueEntry> QueuedInWorldIcons;
    
public:
    AOakChallengeManager();
};

