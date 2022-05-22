#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspect_Territory.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_Territory : public UAIAspect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FGbxBlackboardKeySelector> TerritoryKeys;
    
public:
    UAIAspect_Territory();
};

