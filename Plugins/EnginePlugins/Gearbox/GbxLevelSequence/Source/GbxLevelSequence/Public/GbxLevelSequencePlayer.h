#pragma once
#include "CoreMinimal.h"
#include "LevelSequencePlayer.h"
#include "MovieSceneSequencePlayer.h"
#include "GbxLevelSequencePlayer.generated.h"

class AGbxLevelSequenceActor;
class ULevelSequence;
class UObject;
class UGbxLevelSequencePlayer;

UCLASS()
class GBXLEVELSEQUENCE_API UGbxLevelSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY()
    AGbxLevelSequenceActor* GbxLevelSequenceActor;
    
    UGbxLevelSequencePlayer();
    UFUNCTION()
    void OnStarted();
    
    UFUNCTION(BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable)
    static UGbxLevelSequencePlayer* CreateGbxLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, bool bPlay, FMovieSceneSequencePlaybackSettings Settings, AGbxLevelSequenceActor*& OutActor);
    
};

