#pragma once
#include "CoreMinimal.h"
#include "WwiseEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FWwiseEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WetVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DryVolume;
    
    WWISEAUDIO_API FWwiseEffectInfo();
};

