#include "GbxMediaManager.h"

class UMediaPlayer;
class UObject;
class UGbxMediaData;

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

