#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "GrenadeBehavior_PayloadMiniMirv.generated.h"

class UWwiseEvent;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadMiniMirv : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float MiniMirvSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float MiniMirvGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* MiniMirvSplitAudio;
    
public:
    UGrenadeBehavior_PayloadMiniMirv();
};

