#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxLobbyWidgetMatchmakingWidget.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class UGFxLobbyWidgetMatchmakingWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* MatchmakingWidget;
    
    UPROPERTY(Transient)
    UGbxTextField* ModeNameTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* ProgressTextClip;
    
    UPROPERTY(Transient)
    bool bIsShowing;
    
public:
    UGFxLobbyWidgetMatchmakingWidget();
};

