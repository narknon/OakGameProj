#pragma once
#include "CoreMinimal.h"
#include "GuardianRankSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FGuardianRankSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 GuardianRank;
    
    UPROPERTY()
    int32 StartingExperience;
    
    UPROPERTY()
    int32 GuardianExperience;
    
    OAKGAME_API FGuardianRankSaveGameData();
};

