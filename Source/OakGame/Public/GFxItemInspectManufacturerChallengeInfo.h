#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GFxItemInspectManufacturerChallengeInfo.generated.h"

class UChallenge;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxItemInspectManufacturerChallengeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TSubclassOf<UChallenge> ChallengeClass;
    
    FGFxItemInspectManufacturerChallengeInfo();
};

