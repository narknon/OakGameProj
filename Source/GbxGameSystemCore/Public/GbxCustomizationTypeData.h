#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxCustomizationTypeData.generated.h"

class UGbxCustomizationTargetData;
class UGbxCustomizationTypeData;
class UGameStatData;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxCustomizationTypeData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FText CustomizationTypeName;
    
    UPROPERTY(EditDefaultsOnly)
    FText CustomizationTypeDescription;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUnique;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxCustomizationTypeData* DependentCustomizationType;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxCustomizationTargetData* DependentCustomizationTarget;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGameStatData> AssociatedUnlockStat;
    
    UGbxCustomizationTypeData();
};

