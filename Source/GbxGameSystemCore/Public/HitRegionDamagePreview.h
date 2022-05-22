#pragma once
#include "CoreMinimal.h"
#include "HitRegionInfo.h"
#include "HitRegionDamagePreview.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FHitRegionDamagePreview {
    GENERATED_BODY()
public:
    UPROPERTY()
    FHitRegionInfo HitRegion;
    
    FHitRegionDamagePreview();
};

