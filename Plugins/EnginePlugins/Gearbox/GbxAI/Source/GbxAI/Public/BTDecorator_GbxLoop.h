#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTGbxLoopConditionData.h"
#include "GbxParam.h"
#include "BTDecorator_GbxLoop.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UBTDecorator_GbxLoop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxParam LoopCount;
    
    UPROPERTY(EditAnywhere)
    bool bUseLoopCount;
    
    UPROPERTY(EditAnywhere)
    FGbxParam LoopTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseLoopTime;
    
    UPROPERTY(EditAnywhere)
    FBTGbxLoopConditionData LoopCondition;
    
    UPROPERTY(EditAnywhere)
    bool bUseLoopCondition;
    
    UBTDecorator_GbxLoop();
};

