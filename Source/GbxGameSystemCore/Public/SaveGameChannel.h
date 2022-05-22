#pragma once
#include "CoreMinimal.h"
#include "Engine/Channel.h"
#include "SaveGameChannel.generated.h"

class USaveGameActorInterface;
class ISaveGameActorInterface;

UCLASS(NonTransient)
class GBXGAMESYSTEMCORE_API USaveGameChannel : public UChannel {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<ISaveGameActorInterface> SaveGameActor;
    
    USaveGameChannel();
};

