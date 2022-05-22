#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_CanInterruptAnim.generated.h"

UCLASS(CollapseCategories)
class GBXGAMESYSTEMCORE_API UAnimNotify_CanInterruptAnim : public UAnimNotify {
    GENERATED_BODY()
public:
    UAnimNotify_CanInterruptAnim();
};

