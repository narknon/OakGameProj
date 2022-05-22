#pragma once
#include "CoreMinimal.h"
#include "EWwiseTrackDirectionality.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneWwiseSectionTemplateData.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct FMovieSceneWwiseSectionTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY()
    EWwiseTrackDirectionality PlaybackDirection;
    
    UPROPERTY()
    UWwiseEvent* WwiseEventStart;
    
    UPROPERTY()
    UWwiseEvent* WwiseEventStop;
    
    UPROPERTY()
    float EmitterRadius;
    
    UPROPERTY()
    bool bAllowPlaythrough;
    
    UPROPERTY()
    bool bIsLoopingEvent;
    
    UPROPERTY()
    int32 RowIdx;
    
    UPROPERTY()
    FFrameNumber SectionStartFrame;
    
    UPROPERTY()
    FFrameNumber SectionEndFrame;
    
    UPROPERTY()
    FFrameRate CachedFrameRate;
    
    WWISEAUDIO_API FMovieSceneWwiseSectionTemplateData();
};

