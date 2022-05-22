#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "EOakReticleFeedbackGameEvent.h"
#include "ReticleFeedbackWidgetContainer.generated.h"

class UOakReticleFeedbackWidget;
class AOakPlayerController;

UCLASS(EditInlineNew)
class OAKGAME_API UReticleFeedbackWidgetContainer : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<UOakReticleFeedbackWidget*> FeedbackWidgets;
    
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<AOakPlayerController> OakPCOwner;
    
public:
    UReticleFeedbackWidgetContainer();
    UFUNCTION()
    void OnGameEventCallback(EOakReticleFeedbackGameEvent GameEvent);
    
};

