#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "TeamAttitudeSetEntry.generated.h"

class UTeam;

USTRUCT(BlueprintType)
struct FTeamAttitudeSetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTeam* OtherTeam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETeamAttitude::Type> Attitude;
    
    GBXGAMESYSTEMCORE_API FTeamAttitudeSetEntry();
};

