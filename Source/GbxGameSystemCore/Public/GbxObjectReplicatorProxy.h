#pragma once
#include "CoreMinimal.h"
#include "GbxObjectReplicatorProxyItem.h"
#include "GbxObjectReplicatorProxy.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxObjectReplicatorProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGbxObjectReplicatorProxyItem> Items;
    
public:
    FGbxObjectReplicatorProxy();
};

