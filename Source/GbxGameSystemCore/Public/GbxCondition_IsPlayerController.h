#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_IsPlayerController.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_IsPlayerController : public UGbxCondition {
    GENERATED_BODY()
public:
    UGbxCondition_IsPlayerController();
};

