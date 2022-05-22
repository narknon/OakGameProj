#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Perception/AISenseConfig.h"
#include "Perception/AIPerceptionTypes.h"
#include "AISenseConfig_Threat.generated.h"

class UAISense_Threat;

UCLASS(EditInlineNew)
class GBXAI_API UAISenseConfig_Threat : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly, NoClear)
    TSubclassOf<UAISense_Threat> Implementation;
    
    UAISenseConfig_Threat();
};

