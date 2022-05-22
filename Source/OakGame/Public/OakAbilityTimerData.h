#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "OakAbilityTimerData.generated.h"

UCLASS()
class UOakAbilityTimerData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FName TimerName;
    
public:
    UOakAbilityTimerData();
};

