#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReplicatedMeleeActionData.generated.h"

class UGbxAction;
class UPlayerMeleeData;

USTRUCT(BlueprintType)
struct FReplicatedMeleeActionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Counter;
    
    UPROPERTY()
    TSubclassOf<UGbxAction> Action;
    
    UPROPERTY()
    UPlayerMeleeData* MeleeData;
    
    OAKGAME_API FReplicatedMeleeActionData();
};

