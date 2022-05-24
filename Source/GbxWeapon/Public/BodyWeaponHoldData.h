#pragma once
#include "CoreMinimal.h"
#include "BodyWeaponActionInfo.h"
#include "GbxDataAsset.h"
#include "BodyWeaponHoldData.generated.h"

UCLASS()
class GBXWEAPON_API UBodyWeaponHoldData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FName HoldName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> HoldNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FBodyWeaponActionInfo> WeaponActions;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldForegroundFocusDistance;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldForegroundFocusNearRegionPct;
    
public:
    UBodyWeaponHoldData();
};

