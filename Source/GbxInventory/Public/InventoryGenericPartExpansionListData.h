#pragma once
#include "CoreMinimal.h"
#include "ActorPartListData.h"
#include "InventoryGenericPartExpansionListData.generated.h"

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FInventoryGenericPartExpansionListData : public FActorPartListData {
    GENERATED_BODY()
public:
    FInventoryGenericPartExpansionListData();
};

