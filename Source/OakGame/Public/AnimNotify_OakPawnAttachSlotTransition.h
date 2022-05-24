#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PawnAttachSlotTransition.h"
#include "AnimNotify_OakPawnAttachSlotTransition.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_OakPawnAttachSlotTransition : public UAnimNotify_PawnAttachSlotTransition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAdvanceCameraState;
    
    UAnimNotify_OakPawnAttachSlotTransition();
};

