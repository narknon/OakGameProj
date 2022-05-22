#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OakInventoryMenuCounts.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakInventoryMenuCounts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 ItemCount;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ItemMax;
    
    UPROPERTY(BlueprintReadWrite)
    FLinearColor ItemCountColor;
    
    UPROPERTY(BlueprintReadWrite)
    int32 GoldenKeyCount;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ErediumCount;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MoneyCount;
    
    UPROPERTY(Transient)
    int32 VaultCoinCount;
    
    FOakInventoryMenuCounts();
};

