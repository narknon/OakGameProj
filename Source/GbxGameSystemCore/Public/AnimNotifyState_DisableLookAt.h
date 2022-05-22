#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_DisableLookAt.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_DisableLookAt : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_DisableLookAt();
};

