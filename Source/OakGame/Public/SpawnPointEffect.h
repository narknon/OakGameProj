#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnPointEffect.generated.h"

class UGbxCondition;
class UOakAction_CoordinatedEffect;

USTRUCT(BlueprintType)
struct FSpawnPointEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakAction_CoordinatedEffect> SpecialEffect;
    
    OAKGAME_API FSpawnPointEffect();
};

