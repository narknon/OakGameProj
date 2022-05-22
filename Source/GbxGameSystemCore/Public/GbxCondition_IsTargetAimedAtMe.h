#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxParam.h"
#include "GbxCondition_IsTargetAimedAtMe.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_IsTargetAimedAtMe : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxParam AngleThreshold;
    
public:
    UGbxCondition_IsTargetAimedAtMe();
};

