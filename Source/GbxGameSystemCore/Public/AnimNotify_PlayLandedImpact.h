#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_PlayLandedImpact.generated.h"

UCLASS(CollapseCategories)
class GBXGAMESYSTEMCORE_API UAnimNotify_PlayLandedImpact : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float ImpactSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bAsIfFromJump;
    
public:
    UAnimNotify_PlayLandedImpact();
};

