#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GlobalScreenParticleData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FGlobalScreenParticleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* StartAndLoopParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* EndParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ContentDims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ParticleDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Tag;
    
    OAKGAME_API FGlobalScreenParticleData();
};

