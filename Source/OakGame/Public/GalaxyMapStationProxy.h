#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObjectProxy.h"
#include "GalaxyMapStationProxy.generated.h"

class UPlanetData;

UCLASS(NonTransient)
class OAKGAME_API AGalaxyMapStationProxy : public AAdvancedInteractiveObjectProxy {
    GENERATED_BODY()
public:
    AGalaxyMapStationProxy();
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectedPlanet(UPlanetData* InPlanetData);
    
};

