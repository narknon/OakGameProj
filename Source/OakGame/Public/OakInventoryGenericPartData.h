#pragma once
#include "CoreMinimal.h"
#include "EOakLeague.h"
#include "InventoryGenericPartData.h"
#include "OakInventoryGenericPartData.generated.h"

UCLASS()
class OAKGAME_API UOakInventoryGenericPartData : public UInventoryGenericPartData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOakLeague> SourceLeague;
    
    UOakInventoryGenericPartData();
};

