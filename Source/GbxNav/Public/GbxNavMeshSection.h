#pragma once
#include "CoreMinimal.h"
#include "GbxNavSection.h"
#include "GbxNavMeshSection.generated.h"

class UGbxNavMeshSectionComponent;

UCLASS()
class GBXNAV_API AGbxNavMeshSection : public AGbxNavSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    UGbxNavMeshSectionComponent* MeshSectionComponent;
    
public:
    AGbxNavMeshSection();
};

