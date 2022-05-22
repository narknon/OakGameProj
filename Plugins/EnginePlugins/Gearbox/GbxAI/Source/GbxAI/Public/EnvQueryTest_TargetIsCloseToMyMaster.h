#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GbxParam.h"
#include "EnvQueryTest_TargetIsCloseToMyMaster.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_TargetIsCloseToMyMaster : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGbxParam DistanceThreshold;
    
public:
    UEnvQueryTest_TargetIsCloseToMyMaster();
};

