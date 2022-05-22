#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxParam.h"
#include "GbxCondition_AIHasNearbyAllies.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXAI_API UGbxCondition_AIHasNearbyAllies : public UGbxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxParam AllyCount;
    
    UPROPERTY(EditAnywhere)
    FGbxParam Distance;
    
    UPROPERTY(EditAnywhere)
    bool bUseDistance;
    
    UGbxCondition_AIHasNearbyAllies();
};

