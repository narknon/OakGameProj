#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitReactionLayer.h"
#include "HitReactionLayer_Combine.generated.h"

class UHitReactionTag;

UCLASS(Abstract, Const)
class GBXGAMESYSTEMCORE_API UHitReactionLayer_Combine : public UHitReactionLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UHitReactionLayer>> SubLayers;
    
    UPROPERTY(EditAnywhere)
    TArray<UHitReactionTag*> PriorityList;
    
    UPROPERTY(EditAnywhere)
    bool bMissingTagsAreHighestPriority;
    
public:
    UHitReactionLayer_Combine();
};

