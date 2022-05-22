#include "GbxLevelSequencePlayer.h"

class UGbxLevelSequencePlayer;
class ULevelSequence;
class UObject;
class AGbxLevelSequenceActor;

void UGbxLevelSequencePlayer::OnStarted() {
}

bool UGbxLevelSequencePlayer::IsFinished() const {
    return false;
}

UGbxLevelSequencePlayer* UGbxLevelSequencePlayer::CreateGbxLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, bool bPlay, FMovieSceneSequencePlaybackSettings Settings, AGbxLevelSequenceActor*& OutActor) {
    return NULL;
}

UGbxLevelSequencePlayer::UGbxLevelSequencePlayer() {
    this->GbxLevelSequenceActor = NULL;
}

