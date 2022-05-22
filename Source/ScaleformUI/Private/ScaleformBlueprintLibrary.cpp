#include "ScaleformBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class USwfMovie;
class UTextureRenderTarget2D;
class UGFxObject;
class UGFxMoviePlayer;

UGFxMoviePlayer* UScaleformBlueprintLibrary::OpenMovie(USwfMovie* Movie, UObject* ExternalInterface, UTextureRenderTarget2D* RenderTexture, const UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused) {
    return NULL;
}

FASValue UScaleformBlueprintLibrary::InvokeNoParams(const UGFxMoviePlayer* MoviePlayer, const FString& FunctionName) {
    return FASValue{};
}

FASValue UScaleformBlueprintLibrary::Invoke(const UGFxMoviePlayer* MoviePlayer, const FString& FunctionName, const TArray<FASValue>& Params) {
    return FASValue{};
}

UGFxObject* UScaleformBlueprintLibrary::GetVariable(const UGFxMoviePlayer* MoviePlayer, const FString& VariablePath) {
    return NULL;
}

UGFxObject* UScaleformBlueprintLibrary::GetMovieClip(const UGFxMoviePlayer* MoviePlayer, const FString& MovieClipName) {
    return NULL;
}

UGFxObject* UScaleformBlueprintLibrary::GetMember(const UGFxMoviePlayer* MoviePlayer, const FString& MemberName) {
    return NULL;
}

void UScaleformBlueprintLibrary::GetAllGFxMoviePlayerOfClass(UObject* WorldContextObject, const TArray<UGFxMoviePlayer*>& FoundGFxMoviePlayer, TSubclassOf<UGFxMoviePlayer> GFxMoviePlayerClass, bool VisibleOnly) {
}

void UScaleformBlueprintLibrary::CloseMovie(const UGFxMoviePlayer* MoviePlayer) {
}

UScaleformBlueprintLibrary::UScaleformBlueprintLibrary() {
}

