#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMovieLoader.h"
#include "GFxLoadedNewsImage.generated.h"

class UGbxGFxObject;

UCLASS(NonTransient)
class UGFxLoadedNewsImage : public UGbxGFxMovieLoader {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FString CurrentImageFrame;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NewsFrameClip;
    
public:
    UGFxLoadedNewsImage();
protected:
    UFUNCTION()
    void OnNewsImageLoadComplete(UGbxGFxMovieLoader* MovieLoader);
    
};

