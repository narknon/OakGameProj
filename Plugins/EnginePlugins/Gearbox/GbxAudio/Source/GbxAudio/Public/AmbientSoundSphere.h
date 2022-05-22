#pragma once
#include "CoreMinimal.h"
#include "WwiseAmbientSound.h"
#include "AmbientSoundSphere.generated.h"

class USphereComponent;

UCLASS()
class GBXAUDIO_API AAmbientSoundSphere : public AWwiseAmbientSound {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    USphereComponent* SphereComponent;
    
    AAmbientSoundSphere();
};

