#pragma once
#include "CoreMinimal.h"
#include "ConditionalAudioSwitch.generated.h"

class UGbxCondition;
class UWwiseSwitch;

USTRUCT(BlueprintType)
struct FConditionalAudioSwitch {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxCondition* SwitchCondition;
    
    UPROPERTY(EditAnywhere)
    UWwiseSwitch* SwitchToSet;
    
    OAKGAME_API FConditionalAudioSwitch();
};

