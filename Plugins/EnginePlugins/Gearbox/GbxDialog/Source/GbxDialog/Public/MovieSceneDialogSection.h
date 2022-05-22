#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "DialogTimeSlotReference.h"
#include "MovieSceneDialogSection.generated.h"

class UDialogNameTag;

UCLASS()
class GBXDIALOG_API UMovieSceneDialogSection : public UMovieSceneSection {
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
    
    UMovieSceneDialogSection();
};

