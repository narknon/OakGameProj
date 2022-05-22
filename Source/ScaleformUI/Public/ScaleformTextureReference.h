#pragma once
#include "CoreMinimal.h"
#include "ScaleformTextureReference.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SCALEFORMUI_API FScaleformTextureReference {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UObject> Asset;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UObject> HighDefinitionAsset;
    
    FScaleformTextureReference();
};

