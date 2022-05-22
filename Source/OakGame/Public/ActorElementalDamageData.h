#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActorElementalInteractionDamageData.h"
#include "ActorElementalDamageData.generated.h"

class UGbxDamageType;

USTRUCT(BlueprintType)
struct FActorElementalDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<TSubclassOf<UGbxDamageType>, FActorElementalInteractionDamageData> DamageInteractions;
    
    UPROPERTY(Transient)
    int32 DamageCount;
    
    OAKGAME_API FActorElementalDamageData();
};

