#pragma once
#include "CoreMinimal.h"
#include "ActiveAmbientSound.h"
#include "Perception/AIPerceptionTypes.h"
#include "PerceptiveActiveAmbientSound.generated.h"

class UAIPerceptionComponent;
class AActor;

UCLASS()
class APerceptiveActiveAmbientSound : public AActiveAmbientSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UAIPerceptionComponent* AIPerception;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartleRadius;
    
    APerceptiveActiveAmbientSound();
    UFUNCTION()
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
};

