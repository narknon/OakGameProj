#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GFxItemInspectionCategoryInfo.generated.h"

class UInventoryCategoryData;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxItemInspectionCategoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* CategoryData;
    
    UPROPERTY(EditAnywhere)
    FTransform BaseTransform;
    
    FGFxItemInspectionCategoryInfo();
};

