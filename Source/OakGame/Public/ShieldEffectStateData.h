#pragma once
#include "CoreMinimal.h"
#include "EShieldEffectState.h"
#include "Engine/NetSerialization.h"
#include "ShieldEffectStateData.generated.h"

class UOakStatusEffectManagerComponent;

USTRUCT(BlueprintType)
struct FShieldEffectStateData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, NotReplicated)
    UOakStatusEffectManagerComponent* Owner;
    
    UPROPERTY()
    EShieldEffectState State;
    
    UPROPERTY()
    FVector_NetQuantize RelativeHitLocation;
    
    UPROPERTY(NotReplicated)
    float NextHitTime;
    
public:
    OAKGAME_API FShieldEffectStateData();
};

