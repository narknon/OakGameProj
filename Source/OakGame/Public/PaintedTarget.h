#pragma once
#include "CoreMinimal.h"
#include "HUDInWorldIconTargetInfo.h"
#include "PaintedTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPaintedTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> PaintedTarget;
    
    UPROPERTY()
    FHUDInWorldIconTargetInfo HUDIconInfo;
    
    OAKGAME_API FPaintedTarget();
};

