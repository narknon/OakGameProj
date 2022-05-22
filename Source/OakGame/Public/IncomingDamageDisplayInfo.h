#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "NumericRange.h"
#include "GbxEasingFunc.h"
#include "IncomingDamageDisplayInfo.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FIncomingDamageDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* HealthDamageIndicatorStaticMesh;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* ShieldDamageIndicatorStaticMesh;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* ArmorDamageIndicatorStaticMesh;
    
    UPROPERTY(EditAnywhere)
    FVector DamageIndicatorRelativeLocation;
    
    UPROPERTY(EditAnywhere)
    float DamageIndicatorScale;
    
    UPROPERTY(EditAnywhere)
    float MinForegroundFOVToDrawIndicators;
    
    UPROPERTY(EditAnywhere)
    float DamageIndicatorDuration;
    
    UPROPERTY(EditAnywhere)
    float DamageIndicatorFadeDuration;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ScaleDurationBySeverityCurve;
    
    UPROPERTY(EditAnywhere)
    int32 MaxDamageIndicators;
    
    UPROPERTY(EditAnywhere)
    FVector DamageIndicatorSphereRelativeLocation;
    
    UPROPERTY(EditAnywhere)
    float DamageIndicatorSphereRelativePitch;
    
    UPROPERTY(EditAnywhere)
    FVector DamageIndicatorSphereRadius;
    
    UPROPERTY(EditAnywhere)
    FName DamageIndicatorOpacityAlphaParameterName;
    
    UPROPERTY(EditAnywhere)
    FName DamageIndicatorPercentOfLifeMaterialParameterName;
    
    UPROPERTY(EditAnywhere)
    FNumericRange DamageIndicatorCenterFadeScreenPercent;
    
    UPROPERTY(EditAnywhere)
    FName DamageIndicatorCenterFadeMaterialParameterName;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve DamageIndicatorYawRemappingCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve DamageIndicatorPitchRemappingCurve;
    
    UPROPERTY(EditAnywhere)
    float MaxPitchToApplyYawRemapping;
    
    UPROPERTY(EditAnywhere)
    float MeleeJoltRange;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve MeleeJoltLocationCurve;
    
    UPROPERTY(EditAnywhere)
    FGbxEasingFunc AttackerLocationCrouchEasing;
    
    UPROPERTY(EditAnywhere)
    float AttackerLocationCrouchTransitionDuration;
    
    OAKGAME_API FIncomingDamageDisplayInfo();
};

