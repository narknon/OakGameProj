#pragma once
#include "CoreMinimal.h"
#include "AIAspect_Navigation.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspect_MoveNode.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_MoveNode : public UAIAspect_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector NodeKey;
    
    UAIAspect_MoveNode();
};

