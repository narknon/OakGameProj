#pragma once
#include "CoreMinimal.h"
#include "InteractiveObject.h"
#include "LostLootMachine.generated.h"

UCLASS()
class ALostLootMachine : public AInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 CurrentLostLootCount;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MaxLostLootSize;
    
    ALostLootMachine();
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetScreenState(float UsagePercentage);
    
    UFUNCTION()
    void OnLostLootChanged();
    
};

