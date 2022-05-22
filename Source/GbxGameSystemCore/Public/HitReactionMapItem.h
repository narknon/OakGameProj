#pragma once
#include "CoreMinimal.h"
#include "HitReactionMapItem.generated.h"

class UHitReactionTag;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FHitReactionMapItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UHitReactionTag* FromTag;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* ToTag;
    
    FHitReactionMapItem();
};

