#pragma once
#include "CoreMinimal.h"
#include "ClothingSimulationInteractor.h"
#include "UObject/NoExportTypes.h"
#include "ClothingSimulationInteractorNv.generated.h"

UCLASS()
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor {
    GENERATED_BODY()
public:
    UClothingSimulationInteractorNv();
    UFUNCTION(BlueprintCallable)
    void SetAnimDriveSpringStiffness(float InStiffness);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimDriveDamperStiffness(float InStiffness);
    
    UFUNCTION(BlueprintCallable)
    void EnableGravityOverride(const FVector& InVector);
    
    UFUNCTION(BlueprintCallable)
    void DisableGravityOverride();
    
};

