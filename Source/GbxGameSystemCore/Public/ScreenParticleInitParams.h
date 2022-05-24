#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EScreenParticleScalingMode.h"
#include "ScreenParticleInitParams.generated.h"

class UParticleSystem;
class AActor;

USTRUCT(BlueprintType)
struct FScreenParticleInitParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* Template;
    
    UPROPERTY()
    uint8 bHideWhenFinished: 1;
    
    UPROPERTY()
    uint8 bDestroyWhenFinished: 1;
    
    UPROPERTY()
    uint8 bOnlyOwnerSee: 1;
    
    UPROPERTY()
    uint8 bAlwaysVisible: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowMultipleInstances: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTickEvenWhenPaused: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHideDuringInGameMenu: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDepthPriorityWorld: 1;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContentDims;
    
    UPROPERTY(EditAnywhere)
    float ParticleDepth;
    
    UPROPERTY(EditAnywhere)
    EScreenParticleScalingMode ScalingMode;
    
    UPROPERTY(EditAnywhere)
    FName Tag;
    
    UPROPERTY()
    AActor* OwnerOverride;
    
    GBXGAMESYSTEMCORE_API FScreenParticleInitParams();
};

