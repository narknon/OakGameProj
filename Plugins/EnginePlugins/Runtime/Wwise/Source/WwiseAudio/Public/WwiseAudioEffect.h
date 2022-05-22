#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WwiseAudioEffect.generated.h"

class UWwiseAuxBus;

UCLASS(BlueprintType)
class WWISEAUDIO_API UWwiseAudioEffect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseAuxBus* AuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectStrengh;
    
    UWwiseAudioEffect();
    UFUNCTION(BlueprintCallable)
    void DeactivateEffect();
    
    UFUNCTION(BlueprintCallable)
    void ActivateEffect();
    
};

