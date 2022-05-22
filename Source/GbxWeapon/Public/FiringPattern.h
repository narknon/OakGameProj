#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "FiringPatternSample.h"
#include "FiringPattern.generated.h"

UCLASS()
class GBXWEAPON_API UFiringPattern : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, EditFixedSize, NoClear)
    TArray<FFiringPatternSample> Samples;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireRandomlyFromPattern: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bResetPatternAfterEachShot: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bScalePattern: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLerpAcrossFiringLineBasedOnProjectileCountWithinEachShot: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSuppressWeaponSpread: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSingleWeaponSpread: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableTracerThrottling: 1;
    
    UPROPERTY(EditAnywhere)
    float BasePatternScale;
    
    UPROPERTY(EditAnywhere)
    float MinPatternScale;
    
    UPROPERTY(EditAnywhere)
    int32 RequiredProjectilesPerShot;
    
public:
    UFiringPattern();
};

