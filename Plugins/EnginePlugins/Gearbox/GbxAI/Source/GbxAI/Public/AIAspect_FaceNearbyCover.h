#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspect_FaceNearbyCover.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_FaceNearbyCover : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector CoverKey;
    
    UAIAspect_FaceNearbyCover();
};

