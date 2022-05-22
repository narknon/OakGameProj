#pragma once
#include "CoreMinimal.h"
#include "InventoryData.h"
#include "OakInventoryData.generated.h"

class UPlayerClassIdentifier;

UCLASS()
class OAKGAME_API UOakInventoryData : public UInventoryData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UPlayerClassIdentifier* RequiredPlayerClass;
    
public:
    UOakInventoryData();
};

