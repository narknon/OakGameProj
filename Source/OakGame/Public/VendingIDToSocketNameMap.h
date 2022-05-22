#pragma once
#include "CoreMinimal.h"
#include "VendingMachineSocketLocationAndOffset.h"
#include "VendingIDToSocketNameMap.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FVendingIDToSocketNameMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FString, FVendingMachineSocketLocationAndOffset> SocketMap;
    
    FVendingIDToSocketNameMap();
};

