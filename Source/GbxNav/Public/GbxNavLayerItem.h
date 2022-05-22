#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GbxNavLayerItem.generated.h"

class UGbxNavLayer;
class UHavokNavLayer;

USTRUCT(BlueprintType)
struct FGbxNavLayerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGbxNavLayer* NavLayer;
    
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    float HalfHeight;
    
    UPROPERTY()
    int32 LayerIdx;
    
    UPROPERTY()
    FColor Color;
    
    UPROPERTY()
    TSubclassOf<UHavokNavLayer> Layer;
    
    GBXNAV_API FGbxNavLayerItem();
};

