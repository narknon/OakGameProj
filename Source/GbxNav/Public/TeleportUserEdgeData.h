#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TeleportUserEdgeData.generated.h"

class UGbxAction;

USTRUCT(BlueprintType)
struct FTeleportUserEdgeData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UGbxAction> EntryAction;
    
    UPROPERTY()
    TSubclassOf<UGbxAction> TeleportAction;
    
    UPROPERTY()
    TSubclassOf<UGbxAction> ExitAction;
    
    GBXNAV_API FTeleportUserEdgeData();
};

