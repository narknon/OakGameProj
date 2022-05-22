#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECARPartType.h"
#include "CARPreviewParticleSystem.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct OAKGAME_API FCARPreviewParticleSystem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ComponentName;
    
    UPROPERTY(EditAnywhere)
    FTransform Offset;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UParticleSystem> Particle;
    
    UPROPERTY(EditAnywhere)
    ECARPartType ParentPart;
    
    UPROPERTY(EditAnywhere)
    FName ParentSocket;
    
    FCARPreviewParticleSystem();
};

