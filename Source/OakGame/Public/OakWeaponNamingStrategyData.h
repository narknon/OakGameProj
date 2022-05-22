#pragma once
#include "CoreMinimal.h"
#include "OakWeaponAttributeNamingData.h"
#include "InventoryNamingStrategyData.h"
#include "OakWeaponNamingAttributeThresholdData.h"
#include "OakWeaponNamingAttributePair.h"
#include "OakWeaponNamingStrategyData.generated.h"

UCLASS()
class OAKGAME_API UOakWeaponNamingStrategyData : public UInventoryNamingStrategyData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TArray<FOakWeaponAttributeNamingData> NamingData;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FOakWeaponNamingAttributeThresholdData> NamingAttributeThresholds;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FOakWeaponNamingAttributePair> SingleNames;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FOakWeaponNamingAttributePair> DoubleNames;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FOakWeaponNamingAttributePair> CombinationNames;
    
public:
    UOakWeaponNamingStrategyData();
};

