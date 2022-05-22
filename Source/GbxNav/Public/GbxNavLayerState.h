#pragma once
#include "CoreMinimal.h"
#include "GbxNavLayerItem.h"
#include "GbxNavLayerState.generated.h"

class AGbxNavWorld;

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxNavLayerState {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGbxNavLayerItem> Layers;
    
    UPROPERTY(Transient)
    AGbxNavWorld* GbxNavWorld;
    
public:
    FGbxNavLayerState();
};

