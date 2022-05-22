#pragma once
#include "CoreMinimal.h"
#include "GameFramework/LocalMessage.h"
#include "OakMessage.generated.h"

UCLASS(Abstract, MinimalAPI)
class UOakMessage : public ULocalMessage {
    GENERATED_BODY()
public:
    UOakMessage();
};

