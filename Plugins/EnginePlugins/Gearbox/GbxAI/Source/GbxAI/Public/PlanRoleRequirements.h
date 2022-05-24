#pragma once
#include "CoreMinimal.h"
#include "EPlanMemberReplacement.h"
#include "GbxParam.h"
#include "GameplayTagContainer.h"
#include "PlanRoleRequirements.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct GBXAI_API FPlanRoleRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag RoleTag;
    
    UPROPERTY(EditAnywhere)
    uint8 MinInstancesOfRole;
    
    UPROPERTY(EditAnywhere)
    uint8 MaxInstancesOfRole;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxParam DistanceToLeaderForParticipation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxParam DistanceToLeaderToRemove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGbxCondition* AdditionalStartCondition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAlsoUseStartConditionAsStopCondition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGbxCondition* AdditionalStopCondition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPlanMemberReplacement MemberReplacementStrategy;
    
    FPlanRoleRequirements();
};

