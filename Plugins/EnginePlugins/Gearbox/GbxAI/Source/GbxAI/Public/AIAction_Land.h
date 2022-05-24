#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_GbxAction.h"
#include "AIAspectSettings_FlyToNavMesh.h"
#include "AIAction_Sequence.h"
#include "AIAspectSettings_Navigation.h"
#include "AIAction_Land.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_Land : public UAIAction_Sequence {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_FlyToNavMesh FlyToNavMeshSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_GbxAction AnimSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation NavSettings;
    
    UAIAction_Land();
};

