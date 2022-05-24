#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoordinatedVectorParameter.h"
#include "CoordinatedScalarParameter.h"
#include "ECoordinatedParticleScaleMode.h"
#include "CoordinatedParticleSystemData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FCoordinatedParticleSystemData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform RelativeTransform;
    
    UPROPERTY(EditDefaultsOnly)
    FName AttachmentName;
    
    UPROPERTY(EditDefaultsOnly)
    float StartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float DeactivateTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCoordinatedScalarParameter> ScalarParameters;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCoordinatedVectorParameter> VectorParameters;
    
    UPROPERTY(EditDefaultsOnly)
    ECoordinatedParticleScaleMode ScaleMode;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bOnlyPlayerOwnerCanSee: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bForegroundLayer: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bInheritViewFlags: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bPermanent: 1;
    
    GBXGAMESYSTEMCORE_API FCoordinatedParticleSystemData();
};

