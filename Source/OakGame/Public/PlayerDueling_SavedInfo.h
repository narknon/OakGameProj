#pragma once
#include "CoreMinimal.h"
#include "PlayerDueling_SavedInfo.generated.h"

class UTeam;

USTRUCT(BlueprintType)
struct FPlayerDueling_SavedInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTeam* Team;
    
    OAKGAME_API FPlayerDueling_SavedInfo();
};

