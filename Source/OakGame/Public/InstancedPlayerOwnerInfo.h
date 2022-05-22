#pragma once
#include "CoreMinimal.h"
#include "InstancedPlayerOwnerInfo.generated.h"

class AOakPlayerController;
class UZoneMapPOITypeData;

USTRUCT(BlueprintType)
struct FInstancedPlayerOwnerInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AOakPlayerController> InstancedPlayerOwner;
    
    UPROPERTY()
    bool bOnlyShowOnPlayerOwner;
    
    UPROPERTY()
    UZoneMapPOITypeData* PointOfInterestType;
    
    OAKGAME_API FInstancedPlayerOwnerInfo();
};

