#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotify_SetRagdollObjectHoldTransform.generated.h"

UCLASS(CollapseCategories)
class GBXGAMESYSTEMCORE_API UAnimNotify_SetRagdollObjectHoldTransform : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnable;
    
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    UAnimNotify_SetRagdollObjectHoldTransform();
};

