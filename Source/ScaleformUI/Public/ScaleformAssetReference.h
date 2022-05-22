#pragma once
#include "CoreMinimal.h"
#include "ScaleformAssetReference.generated.h"

class UObject;

USTRUCT()
struct SCALEFORMUI_API FScaleformAssetReference {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<UObject> Asset;
    
    FScaleformAssetReference();
};

