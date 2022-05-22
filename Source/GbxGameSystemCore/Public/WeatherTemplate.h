#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "WeatherTemplate.generated.h"

class UParticleSystem;

UCLASS()
class GBXGAMESYSTEMCORE_API UWeatherTemplate : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* WorldSpaceParticleTemplate;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ScreenSpaceParticleTemplate;
    
    UWeatherTemplate();
};

