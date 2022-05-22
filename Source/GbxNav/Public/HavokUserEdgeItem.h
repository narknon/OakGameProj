#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HavokUserEdgeItem.generated.h"

class UGbxUserEdge;
class UGbxAction;
class UHavokUserEdge;

USTRUCT(BlueprintType)
struct GBXNAV_API FHavokUserEdgeItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxUserEdge* GbxUserEdge;
    
    UPROPERTY(EditAnywhere)
    float CostScale;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> Action;
    
    UPROPERTY()
    TSubclassOf<UHavokUserEdge> UserEdge;
    
    FHavokUserEdgeItem();
};

