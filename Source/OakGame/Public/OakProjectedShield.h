#pragma once
#include "CoreMinimal.h"
#include "OakProjectedShield.generated.h"

class UStaticMeshComponent;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FOakProjectedShield {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UParticleSystemComponent* ParticleSystem;
    
    OAKGAME_API FOakProjectedShield();
};

