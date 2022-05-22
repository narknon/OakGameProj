#pragma once
#include "CoreMinimal.h"
#include "WwiseEmitter.generated.h"

class UWwiseAudioComponent;

USTRUCT()
struct WWISEAUDIO_API FWwiseEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UWwiseAudioComponent* OwnerComponent;
    
    FWwiseEmitter();
};

