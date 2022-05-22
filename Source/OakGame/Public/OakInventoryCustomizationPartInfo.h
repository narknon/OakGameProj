#pragma once
#include "CoreMinimal.h"
#include "OakInventoryCustomizationPartInfo.generated.h"

class UOakInventoryCustomizationPartData;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakInventoryCustomizationPartInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UOakInventoryCustomizationPartData* CustomizationPart;
    
    UPROPERTY()
    bool bIsNew;
    
    FOakInventoryCustomizationPartInfo();
};

