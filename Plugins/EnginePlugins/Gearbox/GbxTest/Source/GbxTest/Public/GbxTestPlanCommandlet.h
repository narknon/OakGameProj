#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "GbxTestPlanCommandlet.generated.h"

UCLASS(NonTransient)
class UGbxTestPlanCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UGbxTestPlanCommandlet();
};

