#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FoleyEventParams.h"
#include "AnimNotify_Foley.generated.h"

UCLASS(CollapseCategories)
class GBXAUDIO_API UAnimNotify_Foley : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFoleyEventParams FoleyParams;
    
    UPROPERTY(EditAnywhere)
    bool bRestrictToMatchingPlayerPerspective;
    
    UAnimNotify_Foley();
};

