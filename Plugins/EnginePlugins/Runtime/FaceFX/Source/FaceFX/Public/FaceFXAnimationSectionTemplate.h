#pragma once
#include "CoreMinimal.h"
#include "FaceFXAnimationSectionData.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "FaceFXAnimationSectionTemplate.generated.h"

USTRUCT()
struct FFaceFXAnimationSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FFaceFXAnimationSectionData SectionData;
    
public:
    FACEFX_API FFaceFXAnimationSectionTemplate();
};

