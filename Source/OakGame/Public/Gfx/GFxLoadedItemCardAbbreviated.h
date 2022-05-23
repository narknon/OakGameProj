#pragma once
#include "CoreMinimal.h"
#include "GFxLoadedItemCardBase.h"
#include "GFxItemCardAbbreviatedObject.h"
#include "GFxLoadedItemCardAbbreviated.generated.h"

class UGbxGFxMovieLoader;

UCLASS(NonTransient)
class UGFxLoadedItemCardAbbreviated : public UGFxLoadedItemCardBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGFxItemCardAbbreviatedObject ItemCardObject;
    
    UGFxLoadedItemCardAbbreviated();
protected:
    UFUNCTION()
    void OnItemCardLoadComplete(UGbxGFxMovieLoader* MovieLoader);
    
};

