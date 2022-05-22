#pragma once
#include "CoreMinimal.h"
#include "EOakDroneMovementMode.h"
#include "DataTableValueHandle.h"
#include "GRMLNHoverProfile.generated.h"

USTRUCT(BlueprintType)
struct FGRMLNHoverProfile {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EOakDroneMovementMode MovementMode;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableValueHandle Radius;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableValueHandle Altitude;
    
    OAKGAME_API FGRMLNHoverProfile();
};

