#pragma once
#include "CoreMinimal.h"
#include "ZoneMapDisplayActor.h"
#include "PlanetZonePOI.h"
#include "ZoneMapPlanetViewer.generated.h"

class UStaticMesh;
class UPlanetData;
class AZoneMapViewer;
class UZoneMapData;

UCLASS()
class OAKGAME_API AZoneMapPlanetViewer : public AZoneMapDisplayActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPlanetZonePOI> PlanetZonePOIs;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UPlanetData* PlanetData;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AZoneMapViewer* OwningZoneMap;
    
    AZoneMapPlanetViewer();
    UFUNCTION(BlueprintCallable)
    UStaticMesh* GetZoneMeshOnPlanet(UZoneMapData* ZoneMap);
    
};

