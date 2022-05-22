#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HavokUserEdgeTeleportItem.generated.h"

class UGbxUserEdge;
class UGbxAction;
class UHavokUserEdge;

USTRUCT(BlueprintType)
struct GBXNAV_API FHavokUserEdgeTeleportItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxUserEdge* EntryUserEdge;
    
    UPROPERTY(EditAnywhere)
    UGbxUserEdge* ExitUserEdge;
    
    UPROPERTY(EditAnywhere)
    float CostScale;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> TeleportAction;
    
    UPROPERTY()
    TSubclassOf<UHavokUserEdge> EntryEdge;
    
    UPROPERTY()
    TSubclassOf<UHavokUserEdge> ExitEdge;
    
    FHavokUserEdgeTeleportItem();
};

