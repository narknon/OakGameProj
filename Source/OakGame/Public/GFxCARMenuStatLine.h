#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxCARMenuStatLine.generated.h"

class UOakCARVehiclePartStat;
class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxCARMenuStatLine : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float MaxStatValue;
    
    UPROPERTY(Transient)
    UGbxGFxObject* StatIconClip;
    
    UPROPERTY(Transient)
    UGbxTextField* StatLabelText;
    
    UPROPERTY(Transient)
    UGbxTextField* StatValueText;
    
    UPROPERTY(Transient)
    UOakCARVehiclePartStat* Stat;
    
public:
    UGFxCARMenuStatLine();
};

