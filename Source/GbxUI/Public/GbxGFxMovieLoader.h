#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxGFxMovieLoader.generated.h"

class USwfMovie;

UCLASS(NonTransient)
class GBXUI_API UGbxGFxMovieLoader : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FMovieLoadCompleteDelegate OnMovieLoadCompleteDelegate;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LoadedMovie;
    
    UPROPERTY(Transient)
    USwfMovie* QueuedLoadMovie;
    
    UPROPERTY(Transient)
    USwfMovie* CurrentMovie;
    
    UGbxGFxMovieLoader();
};

