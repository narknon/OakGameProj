#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "FluidSurface.generated.h"

class UProceduralMeshComponent;

UCLASS()
class AFluidSurface : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 NumberOfFluidParticlesX;
    
    UPROPERTY(EditAnywhere)
    int32 NumberOfFluidParticlesY;
    
    UPROPERTY(EditAnywhere)
    float TargetHeight;
    
    UPROPERTY(EditAnywhere)
    float FluidStiffness;
    
    UPROPERTY(EditAnywhere)
    float FluidPropagation;
    
    UPROPERTY(EditAnywhere)
    int32 IterationCount;
    
    UPROPERTY(EditAnywhere, Export)
    UProceduralMeshComponent* RenderComponent;
    
    AFluidSurface();
    UFUNCTION(BlueprintCallable)
    void PerturbSurface(const FVector& Position, float Radius, float Force);
    
};

