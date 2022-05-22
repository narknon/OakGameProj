#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AIProjectileInterface.generated.h"

UINTERFACE(Blueprintable)
class OAKGAME_API UAIProjectileInterface : public UInterface {
    GENERATED_BODY()
};

class OAKGAME_API IAIProjectileInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AIProjectile_Disarm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AIProjectile_Detonate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AIProjectile_CanBeStolen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AIProjectile_Arm();
    
};

