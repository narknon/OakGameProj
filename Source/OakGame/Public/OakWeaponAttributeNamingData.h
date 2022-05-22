#pragma once
#include "CoreMinimal.h"
#include "OakWeaponNameThresholdPairData.h"
#include "OakWeaponAttributeNamingData.generated.h"

class UGbxAttributeData;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakWeaponAttributeNamingData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGbxAttributeData* Attribute;
    
    UPROPERTY()
    TArray<FOakWeaponNameThresholdPairData> NamingTiers;
    
public:
    FOakWeaponAttributeNamingData();
};

