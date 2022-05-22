#include "GbxMediaManager.h"

class UGbxMediaData;
class UObject;
class UMediaPlayer;

void UGbxMediaManager::OnMovieMediaOpenFailed(const FString& DeviceUrl) {
}

void UGbxMediaManager::OnMovieMediaClosed() {
}

void UGbxMediaManager::OnMovieEndReached() {
}

UMediaPlayer* UGbxMediaManager::GbxPlayMovie(UObject* WorldContextObject, UGbxMediaData* InMediaData) {
    return NULL;
}

UGbxMediaManager::UGbxMediaManager() {
}

