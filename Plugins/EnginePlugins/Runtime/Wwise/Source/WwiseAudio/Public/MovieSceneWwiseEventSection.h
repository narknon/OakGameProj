#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "EWwiseTrackDirectionality.h"
#include "MovieSceneWwiseEventSection.generated.h"

class UWwiseEvent;

UCLASS()
class WWISEAUDIO_API UMovieSceneWwiseEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EWwiseTrackDirectionality PlaybackDirection;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WwiseEventStart;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WwiseEventStop;
    
    UPROPERTY(EditAnywhere)
    float EmitterRadius;
    
    UPROPERTY(EditAnywhere)
    bool bAllowPlaythrough;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    bool bIsLoopingEvent;
    
    UMovieSceneWwiseEventSection();
};

