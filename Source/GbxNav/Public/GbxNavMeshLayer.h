#pragma once
#include "CoreMinimal.h"
#include "GbxNavLayer.h"
#include "GbxNavMeshLayer.generated.h"

UCLASS()
class GBXNAV_API UGbxNavMeshLayer : public UGbxNavLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float MaxAgentHalfHeight;
    
    UPROPERTY(EditAnywhere)
    float MaxAgentRadius;
    
    UPROPERTY(EditAnywhere)
    bool bSetRadiusManually;
    
    UPROPERTY(EditAnywhere)
    float UserEdgeDistance;
    
    UPROPERTY(EditAnywhere)
    bool bSetUserEdgeDistanceManually;
    
public:
    UGbxNavMeshLayer();
};

