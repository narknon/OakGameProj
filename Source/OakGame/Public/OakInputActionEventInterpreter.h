#pragma once
#include "CoreMinimal.h"
#include "GbxInputActionEventInterpreter.h"
#include "OakInputActionEventInterpreter.generated.h"

UCLASS(Abstract)
class UOakInputActionEventInterpreter : public UGbxInputActionEventInterpreter {
    GENERATED_BODY()
public:
    UOakInputActionEventInterpreter();
};

