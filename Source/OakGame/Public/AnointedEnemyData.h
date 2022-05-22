#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnointedEnemyData.generated.h"

class UGbxAction;

USTRUCT(BlueprintType)
struct FAnointedEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> PreFreezeAction;
    
    UPROPERTY(EditAnywhere)
    float FailsafeDestroyDelay;
    
    UPROPERTY(EditAnywhere)
    bool bSuppressItemPoolsForFailsafeShatter;
    
    OAKGAME_API FAnointedEnemyData();
};

