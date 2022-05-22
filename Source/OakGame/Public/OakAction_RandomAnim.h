#pragma once
#include "CoreMinimal.h"
#include "OakAction_Anim.h"
#include "WeightedAnim.h"
#include "RandomAnimDef.h"
#include "OakAction_RandomAnim.generated.h"

UCLASS()
class OAKGAME_API UOakAction_RandomAnim : public UOakAction_Anim {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FWeightedAnim> RandomAnims;
    
private:
    UPROPERTY()
    TArray<FRandomAnimDef> RandomAnimDefs;
    
public:
    UOakAction_RandomAnim();
};

