#pragma once
#include "CoreMinimal.h"
#include "VendingMachineSocketLocationAndOffset.h"
#include "VendingObjectToSocketLocationMap.generated.h"

class UGbxGFxObject;

USTRUCT(BlueprintType)
struct OAKGAME_API FVendingObjectToSocketLocationMap {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<UGbxGFxObject*, FVendingMachineSocketLocationAndOffset> SocketMap;
    
    FVendingObjectToSocketLocationMap();
};

