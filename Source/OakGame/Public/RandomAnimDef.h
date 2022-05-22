#pragma once
#include "CoreMinimal.h"
#include "AnimActionDef.h"
#include "RandomAnimDef.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FRandomAnimDef {
    GENERATED_BODY()
public:
    UPROPERTY()
    FAnimActionDef AnimAsset3rd;
    
    UPROPERTY()
    float Weight;
    
    FRandomAnimDef();
};

