#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "ACLStatsDumpCommandlet.generated.h"

UCLASS(NonTransient)
class UACLStatsDumpCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UACLStatsDumpCommandlet();
};

