#pragma once
#include "CoreMinimal.h"
#include "OakInventoryNameData.generated.h"

class UInventoryPartData;
class UInventoryNamePartData;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakInventoryNameData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UInventoryPartData* Part;
    
    UPROPERTY(EditAnywhere, Instanced)
    UInventoryNamePartData* NamePart;
    
public:
    FOakInventoryNameData();
};

