#pragma once
#include "CoreMinimal.h"
#include "VaultCardActiveChallengeList.generated.h"

USTRUCT(BlueprintType)
struct FVaultCardActiveChallengeList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint32> VaultCardChallenges;
    
    OAKGAME_API FVaultCardActiveChallengeList();
};

