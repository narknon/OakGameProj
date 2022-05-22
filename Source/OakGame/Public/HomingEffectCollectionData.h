#pragma once
#include "CoreMinimal.h"
#include "EffectCollectionData.h"
#include "HomingEffectCollectionData.generated.h"

class UWwiseEvent;
class UParticleSystem;

UCLASS()
class UHomingEffectCollectionData : public UEffectCollectionData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 bHasEffect: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHasAudio: 1;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* DefaultEffect;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* HomingEffect;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DefaultAudio;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* HomingAudio;
    
public:
    UHomingEffectCollectionData();
};

