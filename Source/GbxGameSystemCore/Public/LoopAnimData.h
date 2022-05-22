#pragma once
#include "CoreMinimal.h"
#include "LoopAnimData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FLoopAnimData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimSequenceBase* AnimStart;
    
    UPROPERTY()
    UAnimSequenceBase* AnimLoop;
    
    UPROPERTY()
    UAnimSequenceBase* AnimStop;
    
    GBXGAMESYSTEMCORE_API FLoopAnimData();
};

