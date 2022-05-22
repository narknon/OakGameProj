#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "InventoryNamePartData.generated.h"

class UGbxCondition;

UCLASS(EditInlineNew)
class GBXINVENTORY_API UInventoryNamePartData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText PartName;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    int32 MinExperienceLevel;
    
    UPROPERTY(EditAnywhere)
    int32 MaxExperienceLevel;
    
public:
    UInventoryNamePartData();
};

