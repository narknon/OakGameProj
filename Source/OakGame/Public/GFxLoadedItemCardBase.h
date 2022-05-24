#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMovieLoader.h"
#include "GFxLoadedItemCardBase.generated.h"

UCLASS(Abstract, NonTransient)
class UGFxLoadedItemCardBase : public UGbxGFxMovieLoader {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FLoadedItemCardReadyDelegate OnItemCardReady;
    
    UPROPERTY(Transient)
    bool bHasBeenLoaded;
    
    UGFxLoadedItemCardBase();
};

