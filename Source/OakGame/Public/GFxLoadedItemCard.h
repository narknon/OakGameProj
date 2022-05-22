#pragma once
#include "CoreMinimal.h"
#include "GFxLoadedItemCardBase.h"
#include "GFxItemCardObject.h"
#include "GFxLoadedItemCard.generated.h"

class UGbxGFxMovieLoader;

UCLASS(NonTransient)
class UGFxLoadedItemCard : public UGFxLoadedItemCardBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGFxItemCardObject ItemCardObject;
    
    UGFxLoadedItemCard();
protected:
    UFUNCTION()
    void OnItemCardLoadComplete(UGbxGFxMovieLoader* MovieLoader);
    
};

