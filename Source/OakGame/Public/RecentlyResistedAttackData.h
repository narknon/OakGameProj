#pragma once
#include "CoreMinimal.h"
#include "RecentlyResistedAttackData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRecentlyResistedAttackData {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* DamagedActor;
    
    OAKGAME_API FRecentlyResistedAttackData();
};

