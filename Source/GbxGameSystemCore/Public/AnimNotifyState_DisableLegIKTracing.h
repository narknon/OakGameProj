#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_DisableLegIKTracing.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_DisableLegIKTracing : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_DisableLegIKTracing();
};

