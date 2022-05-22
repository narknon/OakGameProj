#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FluidSimExampleZone.generated.h"

UCLASS()
class GBXAUDIO_API AFluidSimExampleZone : public AActor {
    GENERATED_BODY()
public:
    AFluidSimExampleZone();
    UFUNCTION()
    void UpdateVisualization();
    
    UFUNCTION()
    void ExportVectorField();
    
    UFUNCTION()
    void ApplyToOtherSim();
    
};

