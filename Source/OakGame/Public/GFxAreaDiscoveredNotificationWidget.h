#pragma once
#include "CoreMinimal.h"
#include "GFxDisplayedNotificationWidget.h"
#include "GFxAreaDiscoveredNotificationWidget.generated.h"

class UGbxTextField;

UCLASS()
class UGFxAreaDiscoveredNotificationWidget : public UGFxDisplayedNotificationWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseNowEnteringMessaging;
    
    UPROPERTY(EditAnywhere)
    FText AreaDiscoveredText;
    
    UPROPERTY(EditAnywhere)
    FText NowEnteringText;
    
private:
    UPROPERTY(Transient)
    UGbxTextField* TitleTextClip;
    
public:
    UGFxAreaDiscoveredNotificationWidget();
};

