#pragma once
#include "CoreMinimal.h"
#include "ExtraFoleyParameter.generated.h"

class UWwiseRtpc;

USTRUCT(BlueprintType)
struct FExtraFoleyParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseRtpc* RtpcParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    GBXAUDIO_API FExtraFoleyParameter();
};

