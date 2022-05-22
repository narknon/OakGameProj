#pragma once
#include "CoreMinimal.h"
#include "WeaponConfigurationEvent.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct FWeaponConfigurationEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* WwiseEvent;
    
    OAKGAME_API FWeaponConfigurationEvent();
};

