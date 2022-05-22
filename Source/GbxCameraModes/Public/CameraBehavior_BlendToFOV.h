#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "CameraBehavior_BlendToFOV.generated.h"

class UCurveFloat;
class UGbxCondition;

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_BlendToFOV : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* FOVCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAddModifierToBaseFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FOVModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendInDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGbxCondition* BlendInCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlendOutWhenBlendInFails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGbxCondition* BlendOutCondition;
    
protected:
    UPROPERTY(Transient)
    float CurrentDelay;
    
    UPROPERTY(Transient)
    float MaxFOVModifier;
    
    UPROPERTY(Transient)
    float BlendPct;
    
    UPROPERTY(Transient)
    bool bTransitioningToTargetFoV;
    
public:
    UCameraBehavior_BlendToFOV();
};

