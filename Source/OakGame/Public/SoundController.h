#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SoundController.generated.h"

class ASoundControllerSensor;
class UWwiseRtpc;

UCLASS()
class ASoundController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<ASoundControllerSensor*> Sensors;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* RTPC;
    
    UPROPERTY()
    TMap<AActor*, float> Values;
    
    ASoundController();
};

