#pragma once
#include "CoreMinimal.h"
#include "HitReactionLayer.h"
#include "HitReactionCooldownData.h"
#include "HitReactionLayer_Cooldown.generated.h"

UCLASS(Abstract, Const)
class GBXGAMESYSTEMCORE_API UHitReactionLayer_Cooldown : public UHitReactionLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float DefaultCooldown;
    
    UPROPERTY(EditAnywhere)
    TArray<FHitReactionCooldownData> Cooldowns;
    
public:
    UHitReactionLayer_Cooldown();
};

