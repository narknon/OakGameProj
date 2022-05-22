#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxParam.h"
#include "AIAspectSettings_Revive.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FAIAspectSettings_Revive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxBlackboardKeySelector Target;
    
    UPROPERTY(EditAnywhere)
    FGbxParam ReviveDistance;
    
    FAIAspectSettings_Revive();
};

