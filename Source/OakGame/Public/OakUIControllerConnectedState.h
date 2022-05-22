#pragma once
#include "CoreMinimal.h"
#include "OakUIControllerConnectedState.generated.h"

class ULocalPlayer;
class UGFxControllerDisconnectMovie;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakUIControllerConnectedState {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<ULocalPlayer> LocalPlayer;
    
    UPROPERTY(Transient)
    UGFxControllerDisconnectMovie* DisconnectMovie;
    
    FOakUIControllerConnectedState();
};

