#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "HavokUserEdgeItem.h"
#include "HavokUserEdgeTeleportItem.h"
#include "HavokPathFindingData.generated.h"

class UGbxAction;

UCLASS()
class GBXNAV_API UHavokPathFindingData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FHavokUserEdgeItem> UserEdges;
    
    UPROPERTY(EditAnywhere)
    TArray<FHavokUserEdgeTeleportItem> UserEdgeTeleports;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> DefaultTeleportAction;
    
    UHavokPathFindingData();
};

