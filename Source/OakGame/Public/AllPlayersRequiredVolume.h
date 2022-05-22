#pragma once
#include "CoreMinimal.h"
#include "OakTriggerVolume.h"
#include "PlayerTouchedButNotAllTouchingDelegateDelegate.h"
#include "AllPlayersRequiredVolume.generated.h"

UCLASS()
class OAKGAME_API AAllPlayersRequiredVolume : public AOakTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayerTouchedButNotAllTouchingDelegate OnPlayerTouchedButNotAllPlayersTouching;
    
    AAllPlayersRequiredVolume();
};

