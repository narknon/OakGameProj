#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "HitReactionPair.h"
#include "HitReactionData.generated.h"

class UHitReactionLayer;

UCLASS()
class GBXGAMESYSTEMCORE_API UHitReactionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UHitReactionLayer>> LiveLayers;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UHitReactionLayer>> DeathLayers;
    
    UPROPERTY(EditAnywhere)
    TArray<FHitReactionPair> HitReactions;
    
public:
    UHitReactionData();
};

