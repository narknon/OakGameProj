#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EZoneMapChallengeStatus.h"
#include "ZoneMapChallengeQuery.generated.h"

class UChallenge;
class AOakZoneMapIcon_POI;

USTRUCT(BlueprintType)
struct FZoneMapChallengeQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UChallenge> ChallengeClass;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EZoneMapChallengeStatus> ChallengeStatus;
    
    UPROPERTY(BlueprintReadOnly)
    AOakZoneMapIcon_POI* IconActor;
    
    OAKGAME_API FZoneMapChallengeQuery();
};

