#pragma once
#include "CoreMinimal.h"
#include "OakLightProjectile.h"
#include "OakJAKFeedbackData.h"
#include "UObject/NoExportTypes.h"
#include "OakJAKLightProjectile.generated.h"

class UOakJAKLightProjectileData;

UCLASS()
class UOakJAKLightProjectile : public UOakLightProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UOakJAKLightProjectileData* JAKData;
    
public:
    UOakJAKLightProjectile();
protected:
    UFUNCTION(BlueprintPure)
    void PlayFeedback(const FOakJAKFeedbackData& FeedbackData, const FVector& EffectLocation) const;
    
};

