#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "ActorTagCompositeQuery.h"
#include "GbxCondition_HasActorTags.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_HasActorTags : public UGbxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FActorTagCompositeQuery ActorTagQuery;
    
    UGbxCondition_HasActorTags();
};

