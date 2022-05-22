#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "OakLevelScriptActor.generated.h"

class UMissionObserverComponent;

UCLASS()
class OAKGAME_API AOakLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMissionObserverComponent* LevelMissionObserver;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerDiedEvent OnPlayerDied;
    
    AOakLevelScriptActor();
};

