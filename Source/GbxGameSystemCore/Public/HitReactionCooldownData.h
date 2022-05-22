#pragma once
#include "CoreMinimal.h"
#include "HitReactionCooldownData.generated.h"

class UHitReactionTag;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FHitReactionCooldownData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UHitReactionTag* Tag;
    
    UPROPERTY(EditAnywhere)
    float Cooldown;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* TagFallback;
    
    UPROPERTY(EditAnywhere)
    bool bCooldownFromStartTime;
    
    FHitReactionCooldownData();
};

