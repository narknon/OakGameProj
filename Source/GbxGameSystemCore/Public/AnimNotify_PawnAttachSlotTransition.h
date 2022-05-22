#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_PawnAttachSlotTransition.generated.h"

UCLASS(CollapseCategories)
class GBXGAMESYSTEMCORE_API UAnimNotify_PawnAttachSlotTransition : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bTriggerOnFirstPersonMesh: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDetach: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAttach: 1;
    
    UAnimNotify_PawnAttachSlotTransition();
};

