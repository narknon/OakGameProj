#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "GbxFullScreenMovie.generated.h"

class UMediaPlayer;

UCLASS(EditInlineNew)
class GBXUI_API UGbxFullScreenMovie : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UMediaPlayer* CurrentPlayer;
    
    UGbxFullScreenMovie();
    UFUNCTION()
    void OnMovieFinishedPlaying();
    
};

