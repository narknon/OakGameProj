#pragma once
#include "CoreMinimal.h"
#include "GFxDisplayedNotificationWidget.h"
#include "GFxMissionCompletedNotificationWidget.generated.h"

class UGbxTextField;

UCLASS()
class UGFxMissionCompletedNotificationWidget : public UGFxDisplayedNotificationWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGbxTextField* MissionCompletedText;
    
    UPROPERTY()
    UGbxTextField* MissionCompletedTextShadow;
    
    UPROPERTY()
    UGbxTextField* MissionTitleText;
    
public:
    UGFxMissionCompletedNotificationWidget();
};

