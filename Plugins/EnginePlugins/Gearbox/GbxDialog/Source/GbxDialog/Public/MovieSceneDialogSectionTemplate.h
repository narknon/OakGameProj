#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneDialogSectionTemplateData.h"
#include "MovieSceneDialogSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneDialogSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneDialogSectionTemplateData TemplateData;
    
    GBXDIALOG_API FMovieSceneDialogSectionTemplate();
};

