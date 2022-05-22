#pragma once
#include "CoreMinimal.h"
#include "ActionState_SimpleAnim.h"
#include "ActionState_DropshipSpawn.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FActionState_DropshipSpawn : public FActionState_SimpleAnim {
    GENERATED_BODY()
public:
    FActionState_DropshipSpawn();
};

