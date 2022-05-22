#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ASValue.h"
#include "ScaleformBlueprintLibrary.generated.h"

class UGFxObject;
class UGFxMoviePlayer;
class UObject;
class USwfMovie;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class SCALEFORMUI_API UScaleformBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UScaleformBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static UGFxMoviePlayer* OpenMovie(USwfMovie* Movie, UObject* ExternalInterface, UTextureRenderTarget2D* RenderTexture, const UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
    
    UFUNCTION(BlueprintCallable)
    static FASValue InvokeNoParams(const UGFxMoviePlayer* MoviePlayer, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static FASValue Invoke(const UGFxMoviePlayer* MoviePlayer, const FString& FunctionName, const TArray<FASValue>& Params);
    
    UFUNCTION(BlueprintCallable)
    static UGFxObject* GetVariable(const UGFxMoviePlayer* MoviePlayer, const FString& VariablePath);
    
    UFUNCTION(BlueprintCallable)
    static UGFxObject* GetMovieClip(const UGFxMoviePlayer* MoviePlayer, const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    static UGFxObject* GetMember(const UGFxMoviePlayer* MoviePlayer, const FString& MemberName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void GetAllGFxMoviePlayerOfClass(UObject* WorldContextObject, const TArray<UGFxMoviePlayer*>& FoundGFxMoviePlayer, TSubclassOf<UGFxMoviePlayer> GFxMoviePlayerClass, bool VisibleOnly);
    
    UFUNCTION(BlueprintCallable)
    static void CloseMovie(const UGFxMoviePlayer* MoviePlayer);
    
};

