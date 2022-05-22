#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxParam.h"
#include "AIDodgeBasicData.generated.h"

class UGbxAction;
class UGbxCondition;

USTRUCT(BlueprintType)
struct FAIDodgeBasicData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxParam Cooldown;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> Action;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    GBXGAMESYSTEMCORE_API FAIDodgeBasicData();
};

