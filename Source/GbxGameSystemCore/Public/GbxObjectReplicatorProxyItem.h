#pragma once
#include "CoreMinimal.h"
#include "GbxObjectReplicatorProxyItem.generated.h"

class UGbxReplicatorProxyData;
class IGbxReplicatorProxyData;
class UActorComponent;

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

