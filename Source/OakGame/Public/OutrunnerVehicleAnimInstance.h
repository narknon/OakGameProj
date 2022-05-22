#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAnimInstance.h"
#include "OutrunnerVehicleAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class OAKGAME_API UOutrunnerVehicleAnimInstance : public UOakVehicleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bOverrideParentAnimInstance;
    
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
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* AnimCharacterEnter;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* AnimCharacterExit;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* AnimHoodDown;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* AnimBrakeBounceA;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* AnimBrakeBounceB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendBodyAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendAccelAlpha;
    
    UOutrunnerVehicleAnimInstance();
private:
    UFUNCTION()
    void OnPrimaryOccupantExit();
    
    UFUNCTION()
    void OnPrimaryOccupantEnter();
    
};

