#pragma once
#include "CoreMinimal.h"
#include "ChallengeInWorldIcon.generated.h"

class UChallengeLevelActorComponent;
class UGFxInWorldIconContainer;
class UGFxInWorldIcon;

USTRUCT(BlueprintType)
struct FChallengeInWorldIcon {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UChallengeLevelActorComponent* LevelActorComponent;
    
    UPROPERTY(Transient)
    UGFxInWorldIconContainer* AssociatedContainer;
    
    UPROPERTY(Transient)
    UGFxInWorldIcon* ChallengeIcon;
    
    OAKGAME_API FChallengeInWorldIcon();
};

