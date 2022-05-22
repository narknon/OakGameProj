#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_IsAttachedToOtherActor.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXAI_API UGbxCondition_IsAttachedToOtherActor : public UGbxCondition {
    GENERATED_BODY()
public:
    UGbxCondition_IsAttachedToOtherActor();
};

