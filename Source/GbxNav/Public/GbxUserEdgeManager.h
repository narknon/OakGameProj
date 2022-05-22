#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxUserEdgeTeleportType.h"
#include "GbxUserEdgeData.h"
#include "GbxDynamicUserEdgeInfo.h"
#include "GbxUserEdgeManager.generated.h"

class UGbxUserEdge;
class UHavokUserEdge;

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxUserEdgeManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UGbxUserEdge*> NormalEdgeTypes;
    
    UPROPERTY()
    TArray<FGbxUserEdgeTeleportType> TeleportTypes;
    
    UPROPERTY(Transient)
    TArray<FGbxUserEdgeData> Edges;
    
    UPROPERTY(Transient)
    TArray<FGbxDynamicUserEdgeInfo> UserEdgesToAdd;
    
    UPROPERTY(Transient)
    TArray<uint32> UserEdgesToRemove;
    
    UPROPERTY()
    TArray<TSubclassOf<UHavokUserEdge>> NormalTypes;
    
public:
    FGbxUserEdgeManager();
};

