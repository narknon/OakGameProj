#pragma once
#include "CoreMinimal.h"
#include "GRMLNBeamData.h"
#include "GRMLNBadDoseData.generated.h"

USTRUCT(BlueprintType)
struct FGRMLNBadDoseData : public FGRMLNBeamData {
    GENERATED_BODY()
public:
    OAKGAME_API FGRMLNBadDoseData();
};

