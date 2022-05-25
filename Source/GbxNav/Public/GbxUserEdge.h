#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=GbxUserEdgeBase -FallbackName=GbxUserEdgeBase
#include "GbxUserEdge.generated.h"

class UGbxUserEdge;


/*likely not right fix */
UCLASS()
class UGbxUserEdgeBase : public UObject
{
};



UCLASS()
class GBXNAV_API UGbxUserEdge : public UGbxUserEdgeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UGbxUserEdge* ReverseEdge;
    
    UPROPERTY(EditAnywhere)
    FColor DrawColor;
    
    UPROPERTY(EditAnywhere)
    bool bAlignEdges;
    
    UPROPERTY(EditAnywhere)
    bool bLimitDistanceMin;
    
    UPROPERTY(EditAnywhere)
    float DistanceMin;
    
    UPROPERTY(EditAnywhere)
    bool bLimitDistanceMax;
    
    UPROPERTY(EditAnywhere)
    float DistanceMax;
    
    UPROPERTY(EditAnywhere)
    bool bLimitHeightMin;
    
    UPROPERTY(EditAnywhere)
    float HeightMin;
    
    UPROPERTY(EditAnywhere)
    bool bLimitHeightMax;
    
    UPROPERTY(EditAnywhere)
    float HeightMax;
    
    UPROPERTY(EditAnywhere)
    bool bZeroWidthEntry;
    
    UPROPERTY(EditAnywhere)
    bool bZeroWidthExit;
    
    UPROPERTY(EditAnywhere)
    bool bTeleportEntry;
    
    UPROPERTY(EditAnywhere)
    bool bTeleportExit;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxUserEdge*> TeleportEdges;
    
public:
    UGbxUserEdge();
};

