#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OakThumbnailManagerConfig.h"
#include "OnIconLoadedDelegateDelegate.h"
#include "OakThumbnailManager.generated.h"

class UTextureRenderTarget2D;

UCLASS()
class OAKGAME_API UOakThumbnailManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UTextureRenderTarget2D*> ReusableRenderTargets;
    
    UPROPERTY(Transient)
    FOakThumbnailManagerConfig Config;
    
public:
    UPROPERTY(Transient)
    FOnIconLoadedDelegate OnThumbnailLoaded;
    
    UOakThumbnailManager();
protected:
    UFUNCTION()
    void OnStreamedTextureLoaded();
    
};

