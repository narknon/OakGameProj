#pragma once
#include "CoreMinimal.h"
#include "CohtmlViewSettings.generated.h"

USTRUCT(BlueprintType)
struct FCohtmlViewSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsTransparent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimationFrameDefer;
    
    COHTMLPLUGIN_API FCohtmlViewSettings();
};

