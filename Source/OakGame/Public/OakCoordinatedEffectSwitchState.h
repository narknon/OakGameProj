#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakCoordinatedEffectSwitchState.generated.h"

class UOakAction_CoordinatedEffect;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakCoordinatedEffectSwitchState {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString DisplayName;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakAction_CoordinatedEffect> Effect;
    
    FOakCoordinatedEffectSwitchState();
};

