#pragma once
#include "CoreMinimal.h"
#include "NavMesh/NavMeshBoundsVolume.h"
#include "GbxNavSection.generated.h"

class UGbxNavSectionComponent;

UCLASS(Abstract)
class GBXNAV_API AGbxNavSection : public ANavMeshBoundsVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UGbxNavSectionComponent* SectionComponent;
    
public:
    AGbxNavSection();
};

