#pragma once
#include "CoreMinimal.h"
#include "OakWeaponNameThresholdPairData.generated.h"

class UInventoryNamePartData;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakWeaponNameThresholdPairData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    float Threshold;
    
    UPROPERTY()
    UInventoryNamePartData* NamePart;
    
public:
    FOakWeaponNameThresholdPairData();
};

