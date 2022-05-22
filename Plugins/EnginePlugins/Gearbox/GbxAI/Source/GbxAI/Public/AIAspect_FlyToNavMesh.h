#pragma once
#include "CoreMinimal.h"
#include "AIAspect_Navigation.h"
#include "AIAspectSettings_FlyToNavMesh.h"
#include "AIAspect_FlyToNavMesh.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_FlyToNavMesh : public UAIAspect_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_FlyToNavMesh FlyToNavMeshSettings;
    
    UAIAspect_FlyToNavMesh();
};

