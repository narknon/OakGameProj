#pragma once
#include "CoreMinimal.h"
#include "HitReactionLayer.h"
#include "HitReactionMapItem.h"
#include "HitReactionLayer_Map.generated.h"

UCLASS(Abstract, Const)
class GBXGAMESYSTEMCORE_API UHitReactionLayer_Map : public UHitReactionLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FHitReactionMapItem> TagMap;
    
public:
    UHitReactionLayer_Map();
};

