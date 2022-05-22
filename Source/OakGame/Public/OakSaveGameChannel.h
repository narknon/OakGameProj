#pragma once
#include "CoreMinimal.h"
#include "SaveGameChannel.h"
#include "OakSaveGameChannel.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UOakSaveGameChannel : public USaveGameChannel {
    GENERATED_BODY()
public:
    UOakSaveGameChannel();
};

