#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "Perception/AIPerceptionTypes.h"
#include "AISenseConfig_GbxPrediction.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UAISenseConfig_GbxPrediction : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_GbxPrediction();
};

