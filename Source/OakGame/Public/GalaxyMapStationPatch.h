#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GalaxyMapStationPatch.generated.h"

class UPlanetData;

UCLASS()
class OAKGAME_API AGalaxyMapStationPatch : public AActor {
    GENERATED_BODY()
public:
    AGalaxyMapStationPatch();
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnPlanetSelected(UPlanetData* Planet);
    
};

