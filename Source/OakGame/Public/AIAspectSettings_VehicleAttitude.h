#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "AIAspectSettings_VehicleAttitude.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_VehicleAttitude {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETeamAttitude::Type> Attitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Inverted;
    
    OAKGAME_API FAIAspectSettings_VehicleAttitude();
};

