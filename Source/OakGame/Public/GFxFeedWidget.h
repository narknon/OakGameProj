#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "EGFxFeedWidgetState.h"
#include "GFxFeedWidget.generated.h"

class UGbxGFxObject;
class UGbxTextField;

UCLASS()
class OAKGAME_API UGFxFeedWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float WidgetDuration;
    
    UPROPERTY(EditAnywhere)
    float MaxWidgetRolloutTime;
    
    UPROPERTY(Transient)
    EGFxFeedWidgetState WidgetState;
    
    UPROPERTY(Transient)
    float WidgetStateTime;
    
    UPROPERTY(Transient)
    UGbxGFxObject* Widget;
    
    UPROPERTY(Transient)
    UGbxTextField* LabelText;
    
public:
    UGFxFeedWidget();
private:
    UFUNCTION()
    void extOnRolloutComplete() const;
    
};

