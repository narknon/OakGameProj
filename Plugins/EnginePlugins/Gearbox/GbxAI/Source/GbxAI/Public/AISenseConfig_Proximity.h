#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "Perception/AIPerceptionTypes.h"
#include "AISenseConfig_Proximity.generated.h"

UCLASS(EditInlineNew)
class GBXAI_API UAISenseConfig_Proximity : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float SenseEnemyDistance;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_Proximity();
};

