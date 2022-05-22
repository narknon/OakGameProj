#pragma once
#include "CoreMinimal.h"
#include "ActionState_Anim.h"
#include "ActionState_SpawnAnim.generated.h"

USTRUCT()
struct GBXSPAWN_API FActionState_SpawnAnim : public FActionState_Anim {
    GENERATED_BODY()
public:
    FActionState_SpawnAnim();
};

