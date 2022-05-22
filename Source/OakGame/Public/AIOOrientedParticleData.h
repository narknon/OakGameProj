#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIOOrientedParticleTarget.h"
#include "AIOOrientedParticleData.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FAIOOrientedParticleData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(EditAnywhere)
    FName OriginSocket;
    
    UPROPERTY(EditAnywhere)
    FName ParticleBeamTargetParameterName;
    
    UPROPERTY(EditAnywhere)
    FVector DefaultBeamTargetPosition;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* ParticleComponent;
    
    UPROPERTY(Transient)
    FAIOOrientedParticleTarget Target;
    
    OAKGAME_API FAIOOrientedParticleData();
};

