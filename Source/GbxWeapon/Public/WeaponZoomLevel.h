#pragma once
#include "CoreMinimal.h"
#include "WeaponZoomLevel.generated.h"

USTRUCT(BlueprintType)
struct FWeaponZoomLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FOVScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FOVLerpPct;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ViewModelFOVScale;
    
    GBXWEAPON_API FWeaponZoomLevel();
};

