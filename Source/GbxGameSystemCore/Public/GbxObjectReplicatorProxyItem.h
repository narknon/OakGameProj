#pragma once
#include "CoreMinimal.h"
#include "GbxObjectReplicatorProxyItem.generated.h"

class UActorComponent;
class UGbxReplicatorProxyData;
class IGbxReplicatorProxyData;

USTRUCT(BlueprintType)
struct FGbxObjectReplicatorProxyItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGbxReplicatorProxyData> Object;
    
    UPROPERTY(Export)
    UActorComponent* Component;
    
    GBXGAMESYSTEMCORE_API FGbxObjectReplicatorProxyItem();
};

