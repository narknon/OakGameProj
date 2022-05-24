#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Beacon.generated.h"

UCLASS(Transient)
class ABeacon : public AActor {
    GENERATED_BODY()
public:
    ABeacon();
    UFUNCTION()
    void OnBeaconSourceEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

