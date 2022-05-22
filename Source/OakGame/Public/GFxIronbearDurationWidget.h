#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxIronbearDurationWidget.generated.h"

class UGbxTextField;
class UOakActionAbility_IronBear;
class UGbxGFxProgressBar;
class UGbxGFxObject;

UCLASS()
class OAKGAME_API UGFxIronbearDurationWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float WarningFlourishThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float HardPointDeltaEpsilon;
    
private:
    UPROPERTY(Transient)
    UOakActionAbility_IronBear* IronBearAbility;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* DurationBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* FuelAnimWrapper;
    
    UPROPERTY(Transient)
    UGbxTextField* FuelLabel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BorderAnimWrapper;
    
public:
    UGFxIronbearDurationWidget();
};

