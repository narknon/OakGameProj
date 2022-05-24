#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxVehicleBoostbar.generated.h"

class UGbxGFxProgressBar;
class UGbxTextField;
class UGbxGFxObject;

UCLASS()
class OAKGAME_API UGFxVehicleBoostbar : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxProgressBar* BoostMeter;
    
    UPROPERTY(Transient)
    UGbxTextField* BoostText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* FillDividersClip;
    
public:
    UGFxVehicleBoostbar();
};

