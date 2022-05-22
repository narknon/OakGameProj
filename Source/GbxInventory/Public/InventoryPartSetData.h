#pragma once
#include "CoreMinimal.h"
#include "ActorPartSetData.h"
#include "InventoryGenericPartListData.h"
#include "InventoryPartSetData.generated.h"

UCLASS(Abstract)
class GBXINVENTORY_API UInventoryPartSetData : public UActorPartSetData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FInventoryGenericPartListData GenericParts;
    
public:
    UInventoryPartSetData();
};

