#pragma once
#include "CoreMinimal.h"
#include "DialogTimeSlotReference.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneDialogSectionTemplateData.generated.h"

class UDialogNameTag;

USTRUCT(BlueprintType)
struct FMovieSceneDialogSectionTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDialogTimeSlotReference Dialog;
    
    UPROPERTY(EditAnywhere)
    bool bPlayThroughDialogSystem;
    
    UPROPERTY(EditAnywhere)
    bool bSubtitleOnly;
    
    UPROPERTY(EditAnywhere)
    FText ManualSubtitleText;
    
    UPROPERTY(EditAnywhere)
    float ManualSubtitleDuration;
    
    UPROPERTY(EditAnywhere)
    UDialogNameTag* SubtitleNameTag;
    
    UPROPERTY()
    int32 RowIdx;
    
    UPROPERTY()
    FFrameNumber SectionStartFrame;
    
    UPROPERTY()
    FFrameNumber SectionEndFrame;
    
    GBXDIALOG_API FMovieSceneDialogSectionTemplateData();
};

