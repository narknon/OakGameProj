#pragma once
#include "CoreMinimal.h"
#include "OakInventoryListComponent.h"
#include "GearUpInventoryListComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGearUpInventoryListComponent : public UOakInventoryListComponent {
    GENERATED_BODY()
public:
    UGearUpInventoryListComponent();
};

