#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "ClosedCaptionEntry.h"
#include "ESubtitleLayoutType.h"
#include "SubtitleLine.h"
#include "GFxCSSubtitles.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKCS_API UGFxCSSubtitles : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float ClosedCaptionLifetime;
    
    UPROPERTY(EditAnywhere)
    float MaxTextScalingForLargestBackground;
    
    UPROPERTY(EditAnywhere)
    TArray<float> SubtitleBackgroundSizeMapping;
    
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
    UGFxCSSubtitles();
};

