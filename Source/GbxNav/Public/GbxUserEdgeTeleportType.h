#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxUserEdgeTeleportType.generated.h"

class UGbxUserEdge;
class UHavokUserEdge;

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxUserEdgeTeleportType {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGbxUserEdge* EntryEdge;
    
    UPROPERTY()
    UGbxUserEdge* ExitEdge;
    
    UPROPERTY()
    TSubclassOf<UHavokUserEdge> Entry;
    
    UPROPERTY()
    TSubclassOf<UHavokUserEdge> Exit;
    
    FGbxUserEdgeTeleportType();
};

