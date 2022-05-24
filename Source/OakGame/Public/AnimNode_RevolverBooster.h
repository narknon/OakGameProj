#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "AnimNode_RevolverBooster.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FAnimNode_RevolverBooster : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BodyCycleFromEngineCycleRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IdleRPM;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EngineRunningAmplitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EngineIdleAmplitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MufflerAmplitudeMutliplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EngineRunningFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EngineIdleFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MufflerFrequencyMutliplier;
    
    FAnimNode_RevolverBooster();
};

