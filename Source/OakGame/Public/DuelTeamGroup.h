#pragma once
#include "CoreMinimal.h"
#include "DuelTeamGroup.generated.h"

class UTeam;

USTRUCT(BlueprintType)
struct FDuelTeamGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UTeam*> PlayerIndexToTeam;
    
    OAKGAME_API FDuelTeamGroup();
};

