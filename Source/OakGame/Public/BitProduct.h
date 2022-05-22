#pragma once
#include "CoreMinimal.h"
#include "BitProduct.generated.h"

USTRUCT(BlueprintType)
struct FBitProduct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText ProductName;
    
    UPROPERTY(EditAnywhere)
    FString ProductSKU;
    
    UPROPERTY(EditAnywhere)
    FString ProductDevSKU;
    
    UPROPERTY(EditAnywhere)
    int32 BitsCost;
    
    OAKGAME_API FBitProduct();
};

