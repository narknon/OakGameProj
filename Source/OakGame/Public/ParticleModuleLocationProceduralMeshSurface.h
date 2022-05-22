#pragma once
#include "CoreMinimal.h"
#include "Particles/Location/ParticleModuleLocationBase.h"
#include "ParticleModuleLocationProceduralMeshSurface.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleLocationProceduralMeshSurface : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName ProceduralMeshActorName;
    
    UPROPERTY(EditAnywhere)
    FName ProceduralMeshComponentName;
    
public:
    UParticleModuleLocationProceduralMeshSurface();
};

