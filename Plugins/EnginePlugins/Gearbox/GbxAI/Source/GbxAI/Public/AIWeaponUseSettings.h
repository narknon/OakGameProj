#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "NumericRange.h"
#include "AIWeaponUseSettings.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIWeaponUseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FireConeAngle;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideFireConeAngle;
    
    UPROPERTY(EditAnywhere)
    FGbxParam BurstCountOverride;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideBurstCount;
    
    UPROPERTY(EditAnywhere)
    FGbxParam BurstDelayOverride;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideBurstDelay;
    
    UPROPERTY(EditAnywhere)
    FGbxParam AccuracyOverride;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideAccuracy;
    
    UPROPERTY(EditAnywhere)
    FGbxParam SuppressingFireTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseSuppressingFireTime;
    
    UPROPERTY(EditAnywhere)
    FNumericRange DesiredRangeOverride;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDesiredRange;
    
    UPROPERTY(EditAnywhere)
    float MaxWeaponLeadingDistance;
    
    FAIWeaponUseSettings();
};

