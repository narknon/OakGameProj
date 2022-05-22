#pragma once
#include "CoreMinimal.h"
#include "PlanetAssetLoadedDelegate.generated.h"

class UPlanetData;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FPlanetAssetLoaded, UPlanetData*, LoadedClassPlanet);

