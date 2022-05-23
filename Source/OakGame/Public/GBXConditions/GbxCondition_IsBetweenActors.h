#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxParam.h"
#include "GbxCondition_IsBetweenActors.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class UGbxCondition_IsBetweenActors : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxParam ForwardActor;
    
    UPROPERTY(EditAnywhere)
    FGbxParam BehindActor;
    
    UPROPERTY(EditAnywhere)
    bool bCanBeAhead;
    
    UPROPERTY(EditAnywhere)
    bool bCanBeBehind;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
public:
    UGbxCondition_IsBetweenActors();
};

