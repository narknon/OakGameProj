#pragma once
#include "CoreMinimal.h"
#include "PlanRoleRequirements.h"
#include "GbxParam.h"
#include "GbxDataAsset.h"
#include "AIPlanData.generated.h"

UCLASS(BlueprintType)
class GBXAI_API UAIPlanData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxParam MaxNumberOfInstances;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPlanRoleRequirements> RoleRequirements;
    
    UAIPlanData();
};

