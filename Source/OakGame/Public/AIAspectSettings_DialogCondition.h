#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "AIAspectSettings_DialogCondition.generated.h"

class UDialogEvent;

USTRUCT(BlueprintType)
struct OAKGAME_API FAIAspectSettings_DialogCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxParam Condition;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* DialogEvent;
    
    FAIAspectSettings_DialogCondition();
};

