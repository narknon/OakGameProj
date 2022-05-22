#pragma once
#include "CoreMinimal.h"
#include "ActorPartListData.h"
#include "VehiclePartListData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FVehiclePartListData : public FActorPartListData {
    GENERATED_BODY()
public:
    FVehiclePartListData();
};

