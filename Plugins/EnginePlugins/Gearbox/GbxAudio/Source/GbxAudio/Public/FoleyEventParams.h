#pragma once
#include "CoreMinimal.h"
#include "FoleyEventParams.generated.h"

class UWwiseEvent;
class UWwiseSwitch;

USTRUCT(BlueprintType)
struct FFoleyEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* WwiseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseSwitch* OptionalMaterialSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> ComponentTags;
    
    GBXAUDIO_API FFoleyEventParams();
};

