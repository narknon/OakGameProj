#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SoundControllerSensor.generated.h"

class ASoundController;
class UBoxComponent;

UCLASS()
class ASoundControllerSensor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ASoundController* Aggregator;
    
    UPROPERTY(Instanced)
    UBoxComponent* BoxComponent;
    
    UPROPERTY(EditAnywhere)
    float FadeDistance;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentValue;
    
    ASoundControllerSensor();
};

