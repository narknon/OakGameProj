#pragma once
#include "CoreMinimal.h"
#include "GbxEasingFunc.h"
#include "LightProjectileMoveModifier.h"
#include "UObject/NoExportTypes.h"
#include "LightProjectileHomingModifier.generated.h"

UCLASS(EditInlineNew)
class ULightProjectileHomingModifier : public ULightProjectileMoveModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRotator MaxTurnRate;
    
    UPROPERTY(EditAnywhere)
    float StartApproachDistance;
    
    UPROPERTY(EditAnywhere)
    float FinalApproachDistance;
    
    UPROPERTY(EditAnywhere)
    float ApproachTurnRateScale;
    
    UPROPERTY(EditAnywhere)
    FGbxEasingFunc ApproachEaseInFunc;
    
    UPROPERTY(EditAnywhere)
    bool bBreakHomingWhenPassingTargetDuringFinalApproach;
    
    UPROPERTY(EditAnywhere)
    float EaseInTime;
    
    UPROPERTY(EditAnywhere)
    FGbxEasingFunc EaseInFunc;
    
    UPROPERTY(EditAnywhere)
    float StopHomingDistance;
    
    ULightProjectileHomingModifier();
};

