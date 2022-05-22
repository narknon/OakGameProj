#pragma once
#include "CoreMinimal.h"
#include "AIAspect_Navigation.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspect_NavCover.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_NavCover : public UAIAspect_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector GoalKey;
    
    UAIAspect_NavCover();
};

