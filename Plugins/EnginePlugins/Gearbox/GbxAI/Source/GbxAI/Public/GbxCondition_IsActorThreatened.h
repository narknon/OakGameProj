#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_IsActorThreatened.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXAI_API UGbxCondition_IsActorThreatened : public UGbxCondition {
    GENERATED_BODY()
public:
    UGbxCondition_IsActorThreatened();
};

