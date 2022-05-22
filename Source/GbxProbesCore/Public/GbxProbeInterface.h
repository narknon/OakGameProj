#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GbxProbeId.h"
#include "GbxProbeInterface.generated.h"

UINTERFACE(Blueprintable)
class GBXPROBESCORE_API UGbxProbeInterface : public UInterface {
    GENERATED_BODY()
};

class GBXPROBESCORE_API IGbxProbeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetGbxProbeId(FGbxProbeId& OutId) const;
    
};

