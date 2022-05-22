#pragma once
#include "CoreMinimal.h"
#include "OakMessage.h"
#include "OakLevelSyncMessage.generated.h"

UCLASS(Abstract, MinimalAPI)
class UOakLevelSyncMessage : public UOakMessage {
    GENERATED_BODY()
public:
    UOakLevelSyncMessage();
};

