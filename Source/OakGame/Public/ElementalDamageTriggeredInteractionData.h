#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ElementalDamageTriggeredInteractionData.generated.h"

class UElementalInteractionData;
class AController;

USTRUCT(BlueprintType)
struct FElementalDamageTriggeredInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UElementalInteractionData* Interaction;
    
    UPROPERTY()
    FVector HitLocation;
    
    UPROPERTY()
    AController* InstigatorController;
    
    OAKGAME_API FElementalDamageTriggeredInteractionData();
};

