#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EOakElementalType.h"
#include "AIHeldActorInterface.generated.h"

UINTERFACE(Blueprintable)
class OAKGAME_API UAIHeldActorInterface : public UInterface {
    GENERATED_BODY()
};

class OAKGAME_API IAIHeldActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AIHeldActor_OnThrow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AIHeldActor_OnPrime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AIHeldActor_OnDrop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EOakElementalType AIHeldActor_GetElementalType();
    
};

