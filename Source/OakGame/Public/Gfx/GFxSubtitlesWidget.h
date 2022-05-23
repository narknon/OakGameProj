#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "ClosedCaptionEntry.h"
#include "ESubtitleLayoutType.h"
#include "SubtitleLine.h"
#include "GFxSubtitlesWidget.generated.h"

class UGbxTextField;
class UGbxGFxObject;

UCLASS()
class OAKGAME_API UGFxSubtitlesWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ClosedCaptionLifetime;
    
    UPROPERTY(EditAnywhere)
    float MaxTextScalingForLargestBackground;
    
    UPROPERTY(EditAnywhere)
    TArray<float> SubtitleBackgroundSizeMapping;
    
private:
    UPROPERTY(Transient)
    UGbxTextField* SubtitleField;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SubtitleBackground;
    
    UPROPERTY(Transient)
    ESubtitleLayoutType CurrentSubtitleLayoutType;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ClosedCaptioningContainer;
    
    UPROPERTY(Transient)
    TArray<FClosedCaptionEntry> ClosedCaptioningLines;
    
    UPROPERTY(Transient)
    TArray<FSubtitleLine> SubtitleLines;
    
    UPROPERTY(Transient)
    int64 CurrentSubtitleID;
    
    UPROPERTY(Transient)
    bool bStopAfterCurrentSubtitle;
    
    UPROPERTY(Transient)
    bool bSubtitleChangePending;
    
    UPROPERTY(Transient)
    float SubtitleLifetime;
    
    UPROPERTY(Transient)
    FText CachedSubtitle;
    
public:
    UGFxSubtitlesWidget();
};

