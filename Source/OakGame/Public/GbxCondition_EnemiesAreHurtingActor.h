#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxCondition_EnemiesAreHurtingActor.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class UGbxCondition_EnemiesAreHurtingActor : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector HurtTarget;
    
    UPROPERTY(EditAnywhere)
    float MinTargetScore;
    
    UPROPERTY(EditAnywhere)
    float DecayRate;
    
public:
    UGbxCondition_EnemiesAreHurtingActor();
};

