#pragma once
#include "CoreMinimal.h"
#include "EGFxStoreMenuTabType.h"
#include "GFxStoreMenuDLCItem.h"
#include "GFxStoreMenuPage.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxStoreMenuPage {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EGFxStoreMenuTabType PageType;
    
    UPROPERTY(Transient)
    FGFxStoreMenuDLCItem FeaturedItem;
    
    UPROPERTY(Transient)
    TArray<FGFxStoreMenuDLCItem> NonFeaturedItems;
    
    FGFxStoreMenuPage();
};

