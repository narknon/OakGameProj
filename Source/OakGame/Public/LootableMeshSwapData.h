#pragma once
#include "CoreMinimal.h"
#include "LootableInteractionResponse.h"
#include "LootableMeshSwapData.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FLootableMeshSwapData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USkeletalMesh* NewMesh;
    
    UPROPERTY(EditAnywhere)
    bool bSkipRegularOpeningWhenDamaged;
    
    UPROPERTY(EditAnywhere)
    FLootableInteractionResponse Response;
    
    OAKGAME_API FLootableMeshSwapData();
};

