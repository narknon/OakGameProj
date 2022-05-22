#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_HandPlant.generated.h"

UCLASS(CollapseCategories)
class GBXGAMESYSTEMCORE_API UAnimNotify_HandPlant : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 HandIndex;
    
    UPROPERTY(EditAnywhere)
    float Volume;
    
    UPROPERTY(EditAnywhere)
    float Pitch;
    
    UPROPERTY(EditAnywhere)
    bool bRestrictToMatchingPlayerPerspective;
    
    UAnimNotify_HandPlant();
};

