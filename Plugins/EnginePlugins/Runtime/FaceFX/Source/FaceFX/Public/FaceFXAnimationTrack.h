#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "FaceFXAnimationTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UFaceFXAnimationTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> AnimationSections;
    
public:
    UFaceFXAnimationTrack();
};

