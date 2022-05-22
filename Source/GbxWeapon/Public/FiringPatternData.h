#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FiringPatternSample.h"
#include "FiringPatternData.generated.h"

UCLASS(Const, HideDropdown)
class GBXWEAPON_API UFiringPatternData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
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
    float BasePatternScale;
    
    UPROPERTY(EditAnywhere)
    float MinPatternScale;
    
    UPROPERTY(EditAnywhere)
    int32 RequiredProjectilesPerShot;
    
    UFiringPatternData();
};

