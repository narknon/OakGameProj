#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_ToggleClothEnvironmentCollision.generated.h"

UCLASS(CollapseCategories)
class GBXANIMRUNTIME_API UAnimNotify_ToggleClothEnvironmentCollision : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnable;
    
    UAnimNotify_ToggleClothEnvironmentCollision();
};

