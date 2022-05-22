#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxTutorialMessageWidget.generated.h"

class UGbxGFxObject;
class UGbxTextField;
class UTutorialMessageDataAsset;

UCLASS()
class OAKGAME_API UGFxTutorialMessageWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* TutorialWidgetContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* HeaderText;
    
    UPROPERTY(Transient)
    UGbxTextField* BodyText;
    
    UPROPERTY(Transient)
    TArray<UTutorialMessageDataAsset*> TutorialMessageQueue;
    
    UPROPERTY(Transient)
    UTutorialMessageDataAsset* CurrentTutorialMessage;
    
public:
    UPROPERTY(EditAnywhere)
    UTutorialMessageDataAsset* TestMessage;
    
    UGFxTutorialMessageWidget();
private:
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
    UFUNCTION()
    void extOnRolloutComplete() const;
    
};

