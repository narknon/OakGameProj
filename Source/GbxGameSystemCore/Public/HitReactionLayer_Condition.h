#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EHitReactionConditionCombine.h"
#include "HitReactionCondition.h"
#include "HitReactionLayer.h"
#include "HitReactionLayer_Condition.generated.h"

UCLASS(Abstract, Const)
class GBXGAMESYSTEMCORE_API UHitReactionLayer_Condition : public UHitReactionLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FHitReactionCondition> Conditions;
    
    UPROPERTY(EditAnywhere)
    EHitReactionConditionCombine Combine;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UHitReactionLayer> SubLayer;
    
public:
    UHitReactionLayer_Condition();
};

