#pragma once
#include "CoreMinimal.h"
#include "CoordinatedVectorParameter.h"
#include "CoordinatedScalarParameter.h"
#include "CoordinatedParticleSystemParameterData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FCoordinatedParticleSystemParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName Name;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCoordinatedScalarParameter> ScalarParameters;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCoordinatedVectorParameter> VectorParameters;
    
    GBXGAMESYSTEMCORE_API FCoordinatedParticleSystemParameterData();
};

