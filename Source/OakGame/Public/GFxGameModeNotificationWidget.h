#pragma once
#include "CoreMinimal.h"
#include "GFxGameModeNotificationWidgetInfo.h"
#include "GFxDisplayedNotificationWidget.h"
#include "GFxGameModeNotificationWidget.generated.h"

class UGbxTextField;

UCLASS()
class OAKGAME_API UGFxGameModeNotificationWidget : public UGFxDisplayedNotificationWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGFxGameModeNotificationWidgetInfo> GameModeNotificationTextFields;
    
    UPROPERTY(EditAnywhere)
    FString WidgetBasePath;
    
protected:
    UPROPERTY(Transient)
    UGbxTextField* TextObject;
    
    UPROPERTY(Transient)
    UGbxTextField* ShadowTextObject;
    
public:
    UGFxGameModeNotificationWidget();
protected:
    UFUNCTION()
    void HandleCountdownChange(int32 CountdownRemaining) const;
    
};

