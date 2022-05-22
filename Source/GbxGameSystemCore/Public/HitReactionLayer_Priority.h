#pragma once
#include "CoreMinimal.h"
#include "HitReactionLayer.h"
#include "HitReactionLayer_Priority.generated.h"

class UHitReactionTag;

UCLASS(Abstract, Const)
class GBXGAMESYSTEMCORE_API UHitReactionLayer_Priority : public UHitReactionLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<UHitReactionTag*> PriorityList;
    
    UPROPERTY(EditAnywhere)
    TArray<UHitReactionTag*> CanInterruptSelf;
    
public:
    UHitReactionLayer_Priority();
};

