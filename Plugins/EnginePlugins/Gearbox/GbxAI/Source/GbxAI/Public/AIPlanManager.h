#pragma once
#include "CoreMinimal.h"
#include "PlanState.h"
#include "RoleCandidates.h"
#include "AIPlanManager.generated.h"

class UAIPlanData;

USTRUCT(BlueprintType)
struct GBXAI_API FAIPlanManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<UAIPlanData>> AvailablePlans;
    
    UPROPERTY(Transient)
    TArray<FPlanState> ActivePlans;
    
    UPROPERTY(Transient)
    TMap<FName, FRoleCandidates> PotentialCandidatesByRole;
    
public:
    FAIPlanManager();
};

