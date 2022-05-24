#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxEchoNetMatchmakingInitializedWidget.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxEchoNetMatchmakingInitializedWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* MatchmakingModeClip;
    
    UPROPERTY(Transient)
    UGbxTextField* InitializedClip;
    
    UPROPERTY(Transient)
    bool bIsShowing;
    
public:
    UGFxEchoNetMatchmakingInitializedWidget();
};

