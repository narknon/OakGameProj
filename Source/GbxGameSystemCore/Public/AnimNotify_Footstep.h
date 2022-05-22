#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_Footstep.generated.h"

UCLASS(CollapseCategories)
class GBXGAMESYSTEMCORE_API UAnimNotify_Footstep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 FootIndex;
    
    UPROPERTY(EditAnywhere)
    float Volume;
    
    UPROPERTY(EditAnywhere)
    float Pitch;
    
    UPROPERTY(EditAnywhere)
    bool bRestrictToMatchingPlayerPerspective;
    
    UAnimNotify_Footstep();
};

