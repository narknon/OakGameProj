#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GearBuilderCategoryData.generated.h"

UCLASS()
class GBXINVENTORY_API UGearBuilderCategoryData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName CategoryName;
    
public:
    UGearBuilderCategoryData();
};

