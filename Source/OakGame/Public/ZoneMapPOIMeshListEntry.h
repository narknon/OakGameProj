#pragma once
#include "CoreMinimal.h"
#include "ZoneMapPOIMeshListEntry.generated.h"

class UStaticMesh;
class UZoneMapData;

USTRUCT(BlueprintType)
struct OAKGAME_API FZoneMapPOIMeshListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UStaticMesh* ZoneMapPOIMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UZoneMapData* ZoneMapForPOIMesh;
    
    FZoneMapPOIMeshListEntry();
};

