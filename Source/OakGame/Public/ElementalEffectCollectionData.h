#pragma once
#include "CoreMinimal.h"
#include "EffectCollectionData.h"
#include "ElementalEffectCollectionData.generated.h"

class UWwiseEvent;
class UParticleSystem;

UCLASS()
class UElementalEffectCollectionData : public UEffectCollectionData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 bHasElementalEffect: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHasElementalAudio: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFallbackToDefault: 1;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ElementalEffect[6];
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ElementalAudio[6];
    
public:
    UElementalEffectCollectionData();
};

