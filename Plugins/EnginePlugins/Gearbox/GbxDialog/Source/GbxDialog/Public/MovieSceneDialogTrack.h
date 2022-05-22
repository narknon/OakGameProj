#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "MovieSceneDialogTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class GBXDIALOG_API UMovieSceneDialogTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bAllowRename;
    
private:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneDialogTrack();
};

