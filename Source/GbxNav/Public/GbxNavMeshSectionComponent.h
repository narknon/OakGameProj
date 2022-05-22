#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxNavSectionComponent.h"
#include "GbxNavMeshSectionComponent.generated.h"

class UGbxNavMeshLayer;
class UHavokNavMesh;
class UHavokNavMeshLayer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UGbxNavMeshSectionComponent : public UGbxNavSectionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, NoClear)
    UGbxNavMeshLayer* MeshLayer;
    
    UPROPERTY()
    UGbxNavMeshLayer* BuildMeshLayer;
    
    UPROPERTY(EditAnywhere)
    bool bAutoAddUserEdges;
    
    UPROPERTY()
    UHavokNavMesh* NavMesh;
    
    UPROPERTY()
    TSubclassOf<UHavokNavMeshLayer> Layer;
    
    UPROPERTY()
    TSubclassOf<UHavokNavMeshLayer> BuildLayer;
    
public:
    UGbxNavMeshSectionComponent();
};

