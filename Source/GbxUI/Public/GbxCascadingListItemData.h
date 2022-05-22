#pragma once
#include "CoreMinimal.h"
#include "GbxCascadingListItemData.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxCascadingListItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasChildren;
    
    FGbxCascadingListItemData();
};

