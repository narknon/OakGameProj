#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "CameraBehavior_SprintFOV.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UCameraBehavior_SprintFOV : public UCameraBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    float CurrentDelay;
    
    UPROPERTY(Transient)
    float BlendPct;
    
    UPROPERTY(Transient)
    bool bTransitioningToSprintFoV;
    
public:
    UCameraBehavior_SprintFOV();
};

