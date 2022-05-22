#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxNavGlobalData.generated.h"

class UGbxUserEdge;
class UGbxNavMeshLayer;
class UGbxNavArea;
class UGbxNavFlyLayer;

UCLASS()
class GBXNAV_API UGbxNavGlobalData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxNavMeshLayer* DefaultMeshLayer;
    
    UPROPERTY(EditAnywhere)
    UGbxNavFlyLayer* DefaultFlyLayer;
    
    UPROPERTY(EditAnywhere)
    UGbxNavArea* DefaultMeshArea;
    
    UPROPERTY(EditAnywhere)
    UGbxNavArea* NullMeshArea;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxNavArea*> AllMeshAreas;
    
    UPROPERTY(EditAnywhere)
    UGbxUserEdge* DefaultUserEdge;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxUserEdge*> GlobalUserEdges;
    
    UGbxNavGlobalData();
};

