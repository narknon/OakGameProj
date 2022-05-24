#pragma once
#include "CoreMinimal.h"
#include "GbxMenuKeyRepeatInfo.h"
#include "UObject/Object.h"
#include "GbxMenuInputHandlerDelegate.h"
#include "GbxMenuInputRawMousePos.h"
#include "GbxMenuInputAction.h"
#include "GbxMenuInputAxisAction.h"
#include "GbxMenuInput.generated.h"

class UGbxMenuInputListener;
class IGbxMenuInputListener;

UCLASS(DefaultConfig, Config=GbxUI)
class GBXUI_API UGbxMenuInput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGbxMenuInputHandler UnpairedInputHandlerDelegate;
    
private:
    UPROPERTY(Config, Transient)
    bool bShowDebugKeyStates;
    
    UPROPERTY(Config, Transient)
    int32 FramesToIgnoreMouseMoves;
    
    UPROPERTY(Transient)
    TArray<TScriptInterface<IGbxMenuInputListener>> InputListeners;
    
    UPROPERTY(Transient)
    FGbxMenuKeyRepeatInfo KeyRepeatConfig;
    
    UPROPERTY(Transient)
    float AxisAsButtonThreshold;
    
    UPROPERTY(Transient)
    float AxisThreshold;
    
    UPROPERTY(Transient)
    TArray<FGbxMenuInputAction> ActionMappings;
    
    UPROPERTY(Transient)
    TArray<FGbxMenuInputAxisAction> AxisMappings;
    
    UPROPERTY(Transient)
    TArray<FGbxMenuInputRawMousePos> MousePoses;
    
public:
    UGbxMenuInput();
};

