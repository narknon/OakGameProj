#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GameplayTagContainer.h"
#include "GbxCondition_HasGameplayTags.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_HasGameplayTags : public UGbxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UGbxCondition_HasGameplayTags();
};

