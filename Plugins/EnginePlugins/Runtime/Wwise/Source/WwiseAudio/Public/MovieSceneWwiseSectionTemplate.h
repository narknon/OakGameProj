#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneWwiseSectionTemplateData.h"
#include "MovieSceneWwiseSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneWwiseSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneWwiseSectionTemplateData TemplateData;
    
    WWISEAUDIO_API FMovieSceneWwiseSectionTemplate();
};

