#include "GbxGFxMediaPlayer.h"

void UGbxGFxMediaPlayer::OnMovieTracksChanged() {
}

void UGbxGFxMediaPlayer::OnMovieSeekCompleted() {
}

void UGbxGFxMediaPlayer::OnMoviePlaybackSuspended() {
}

void UGbxGFxMediaPlayer::OnMoviePlaybackResumed() {
}

void UGbxGFxMediaPlayer::OnMovieMediaOpenFailed(const FString& FailedUrl) {
}

void UGbxGFxMediaPlayer::OnMovieMediaOpened(const FString& OpenedUrl) {
}

void UGbxGFxMediaPlayer::OnMovieMediaClosed() {
}

void UGbxGFxMediaPlayer::OnMovieEndReached() {
}

UGbxGFxMediaPlayer::UGbxGFxMediaPlayer() {
    this->MediaPlayer = NULL;
}

