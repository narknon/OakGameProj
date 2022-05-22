#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_FindClosestPlayer.h"
#include "AIAspect_FindClosestPlayer.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_FindClosestPlayer : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_FindClosestPlayer Settings;
    
    UAIAspect_FindClosestPlayer();
};

