#pragma once
#include "CoreMinimal.h"
#include "GFxDisplayedNotificationWidget.h"
#include "UObject/NoExportTypes.h"
#include "GFxNewMissionNotificationWidget.generated.h"

class UGbxGFxObject;
class UGbxTextField;
class UGbxGFxHintWidget;

UCLASS()
class UGFxNewMissionNotificationWidget : public UGFxDisplayedNotificationWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D HoldToTrackGlyphSizeOverride;
    
    UPROPERTY(EditAnywhere)
    FText HoldToTrackPromptText;
    
protected:
    UPROPERTY(Transient)
    UGbxTextField* MissionTitleText;
    
    UPROPERTY(Transient)
    UGbxTextField* NewMissionText;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ContextSensitivePrompt;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ContextSensitivePromptBackground;
    
public:
    UGFxNewMissionNotificationWidget();
protected:
    UFUNCTION()
    void TrackNotificationTarget() const;
    
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
};

