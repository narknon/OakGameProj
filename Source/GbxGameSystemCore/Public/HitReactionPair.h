#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitReactionPair.generated.h"

class UHitReactionTag;
class UGbxAction;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FHitReactionPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UHitReactionTag* Tag;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> Action;
    
    FHitReactionPair();
};

