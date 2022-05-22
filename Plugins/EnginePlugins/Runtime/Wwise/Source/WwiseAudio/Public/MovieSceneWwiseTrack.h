#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "MovieSceneWwiseTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class WWISEAUDIO_API UMovieSceneWwiseTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bAllowRename;
    
private:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> WwiseSections;
    
public:
    UMovieSceneWwiseTrack();
};

