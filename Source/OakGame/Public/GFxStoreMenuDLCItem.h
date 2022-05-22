#pragma once
#include "CoreMinimal.h"
#include "EGFxStoreMenuTabType.h"
#include "GFxStoreMenuDLCItem.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxStoreMenuDLCItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EGFxStoreMenuTabType Type;
    
    UPROPERTY(Transient)
    FText Name;
    
    UPROPERTY(Transient)
    FText Description;
    
    UPROPERTY(Transient)
    FString PreviewImageUrl;
    
    UPROPERTY(Transient)
    bool bPurchased;
    
    UPROPERTY(Transient)
    bool bDownloaded;
    
    UPROPERTY(Transient)
    int32 DiscountPercent;
    
    FGFxStoreMenuDLCItem();
};

