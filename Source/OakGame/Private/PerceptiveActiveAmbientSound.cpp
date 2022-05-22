#include "PerceptiveActiveAmbientSound.h"
#include "Perception/AIPerceptionComponent.h"

class AActor;

void APerceptiveActiveAmbientSound::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

APerceptiveActiveAmbientSound::APerceptiveActiveAmbientSound() {
    this->AIPerception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception"));
    this->StartleRadius = 500.00f;
}

