#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxEchoNetMatchmakingModeBackgroundWidget.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class UGFxEchoNetMatchmakingModeBackgroundWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* StarIconClip;
    
    UPROPERTY(Transient)
    UGbxTextField* HeroicTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* CurrentlyMatchmakingTextClip;
    
    UPROPERTY(Transient)
    TArray<UGbxTextField*> RequirementsClips;
    
public:
    UGFxEchoNetMatchmakingModeBackgroundWidget();
};

