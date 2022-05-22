#pragma once
#include "CoreMinimal.h"
#include "EffectCollectionData.h"
#include "IronBearMinigunEffectCollectionData.generated.h"

class UParticleSystem;

UCLASS()
class UIronBearMinigunEffectCollectionData : public UEffectCollectionData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UParticleSystem* DefaultEffect;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* CryoEffect;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ExplosiveEffect;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* OverheatEffect;
    
public:
    UIronBearMinigunEffectCollectionData();
};

