#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_TeamAttitude.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_TeamAttitude : public UGbxCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 bHostile: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bNeutral: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFriendly: 1;
    
public:
    UGbxCondition_TeamAttitude();
};

