#pragma once
#include "CoreMinimal.h"
#include "ActorPartListData.h"
#include "InventoryGenericPartListData.generated.h"

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FInventoryGenericPartListData : public FActorPartListData {
    GENERATED_BODY()
public:
    FInventoryGenericPartListData();
};

