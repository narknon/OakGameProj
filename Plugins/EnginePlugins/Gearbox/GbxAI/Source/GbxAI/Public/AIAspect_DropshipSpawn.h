#pragma once
#include "CoreMinimal.h"
#include "AIAspect_UseNode.h"
#include "AIAspectSettings_DropshipSpawn.h"
#include "AIAspect_DropshipSpawn.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_DropshipSpawn : public UAIAspect_UseNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_DropshipSpawn DropshipSettings;
    
    UAIAspect_DropshipSpawn();
};

