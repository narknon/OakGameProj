#pragma once
#include "CoreMinimal.h"
#include "WeaponShellCasingAudioParameters.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct FWeaponShellCasingAudioParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ShellCasingWwiseEvent;
    
    UPROPERTY(EditAnywhere)
    float EjectDistance;
    
    UPROPERTY(EditAnywhere)
    float ImpactDelay;
    
    OAKGAME_API FWeaponShellCasingAudioParameters();
};

