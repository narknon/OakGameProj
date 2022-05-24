#pragma once
#include "CoreMinimal.h"
#include "EGameModeNotificationType.h"
#include "GFxGameModeNotificationWidgetInfo.generated.h"

USTRUCT(BlueprintType)
struct FGFxGameModeNotificationWidgetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGameModeNotificationType NotificationType;
    
    UPROPERTY(EditAnywhere)
    FString TimelinePosition;
    
    UPROPERTY(EditAnywhere)
    FString ContentPath;
    
    UPROPERTY(EditAnywhere)
    FString TextFieldPath;
    
    UPROPERTY(EditAnywhere)
    FString TextFieldShadowPath;
    
    UPROPERTY(EditAnywhere)
    FText DisplayedText;
    
    OAKGAME_API FGFxGameModeNotificationWidgetInfo();
};

