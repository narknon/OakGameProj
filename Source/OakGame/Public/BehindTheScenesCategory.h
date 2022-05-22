#pragma once
#include "CoreMinimal.h"
#include "BehindTheScenesItem.h"
#include "BehindTheScenesCategory.generated.h"

USTRUCT(BlueprintType)
struct FBehindTheScenesCategory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText CategoryName;
    
    UPROPERTY(EditAnywhere)
    TArray<FBehindTheScenesItem> Items;
    
    OAKGAME_API FBehindTheScenesCategory();
};

