#pragma once
#include "CoreMinimal.h"
#include "WwiseAmbientSound.h"
#include "UObject/NoExportTypes.h"
#include "AmbientSoundSpline.generated.h"

class USplineComponent;

UCLASS()
class GBXAUDIO_API AAmbientSoundSpline : public AWwiseAmbientSound {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* SplineComponent;
    
    UPROPERTY(EditAnywhere)
    bool bForceEmitterUniformScale;
    
    UPROPERTY()
    FBoxSphereBounds CachedBounds;
    
    AAmbientSoundSpline();
};

