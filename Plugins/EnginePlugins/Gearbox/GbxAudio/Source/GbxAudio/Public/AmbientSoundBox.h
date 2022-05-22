#pragma once
#include "CoreMinimal.h"
#include "WwiseAmbientSound.h"
#include "AmbientSoundBox.generated.h"

class UBoxComponent;

UCLASS()
class GBXAUDIO_API AAmbientSoundBox : public AWwiseAmbientSound {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UBoxComponent* BoxComponent;
    
    AAmbientSoundBox();
};

