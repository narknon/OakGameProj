#pragma once
#include "CoreMinimal.h"
#include "OakPhaseWebSphereBeamData.generated.h"

class UParticleSystem;
class USceneComponent;

USTRUCT(BlueprintType)
struct FOakPhaseWebSphereBeamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName BeamEmitterName;
    
    UPROPERTY(BlueprintReadWrite)
    UParticleSystem* BeamParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* BeamSourceComponent;
    
    UPROPERTY(BlueprintReadWrite)
    FName SourceSocketName;
    
    UPROPERTY(BlueprintReadWrite, Export)
    TWeakObjectPtr<USceneComponent> BeamDestComponent;
    
    UPROPERTY(BlueprintReadWrite)
    FName DestSocketName;
    
    OAKGAME_API FOakPhaseWebSphereBeamData();
};

