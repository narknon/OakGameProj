#pragma once
#include "CoreMinimal.h"
#include "ElementalInteractionDamageValuesData.h"
#include "ActorElementalInteractionDamageData.generated.h"

class UElementalInteractionComponent;
class AController;

USTRUCT(BlueprintType)
struct FActorElementalInteractionDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<UElementalInteractionComponent*, FElementalInteractionDamageValuesData> DamageMap;
    
    UPROPERTY(Transient)
    AController* InstigatorController;
    
    OAKGAME_API FActorElementalInteractionDamageData();
};

