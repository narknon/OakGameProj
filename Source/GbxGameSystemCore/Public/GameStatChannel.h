#pragma once
#include "CoreMinimal.h"
#include "Engine/Channel.h"
#include "GameStatChannel.generated.h"

class UGameStatsComponent;

UCLASS(NonTransient)
class GBXGAMESYSTEMCORE_API UGameStatChannel : public UChannel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UGameStatsComponent> GameStatsComponent;
    
public:
    UGameStatChannel();
};

