#pragma once
#include "CoreMinimal.h"
#include "ActionState_SimpleAnim.h"
#include "ActionState_Navigation.generated.h"

USTRUCT()
struct GBXAI_API FActionState_Navigation : public FActionState_SimpleAnim {
    GENERATED_BODY()
public:
    FActionState_Navigation();
};

