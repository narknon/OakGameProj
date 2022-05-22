#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Perception/AISenseConfig.h"
#include "Perception/AIPerceptionTypes.h"
#include "AISenseConfig_Bullet.generated.h"

class UAISense_Bullet;

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UAISenseConfig_Bullet : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly, NoClear)
    TSubclassOf<UAISense_Bullet> Implementation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ListenRadius;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_Bullet();
};

