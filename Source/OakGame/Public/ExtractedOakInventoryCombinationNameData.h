#pragma once
#include "CoreMinimal.h"
#include "ExtractedOakInventoryCombinationNameData.generated.h"

class UInventoryNamePartData;

USTRUCT(BlueprintType)
struct OAKGAME_API FExtractedOakInventoryCombinationNameData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName FirstPartTag;
    
    UPROPERTY()
    FName SecondPartTag;
    
    UPROPERTY()
    UInventoryNamePartData* NamePart;
    
public:
    FExtractedOakInventoryCombinationNameData();
};

