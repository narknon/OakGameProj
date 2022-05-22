#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OakUIControllerConnectedState.h"
#include "OakUIControllerDisconnectManager.generated.h"

UCLASS()
class OAKGAME_API UOakUIControllerDisconnectManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FOakUIControllerConnectedState> ConnectedStates;
    
public:
    UOakUIControllerDisconnectManager();
};

