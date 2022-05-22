#pragma once
#include "CoreMinimal.h"
#include "CustomChallengePersistentState.h"
#include "OakCustomChallengePersistentState.generated.h"

UCLASS(BlueprintType)
class UOakCustomChallengePersistentState : public UCustomChallengePersistentState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<bool> RewardTiersClaimed;
    
    UOakCustomChallengePersistentState();
};

