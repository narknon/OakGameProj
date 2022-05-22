#pragma once
#include "CoreMinimal.h"
#include "FluidSimDataProvider.h"
#include "QuickFluidVelocitySolverDataProvider.generated.h"

UCLASS(EditInlineNew)
class UQuickFluidVelocitySolverDataProvider : public UFluidSimDataProvider {
    GENERATED_BODY()
public:
    UQuickFluidVelocitySolverDataProvider();
    UFUNCTION()
    void StepSim();
    
    UFUNCTION()
    void RunSim();
    
    UFUNCTION()
    void ResetSim();
    
    UFUNCTION()
    void InitSim();
    
    UFUNCTION()
    void ClearData();
    
};

