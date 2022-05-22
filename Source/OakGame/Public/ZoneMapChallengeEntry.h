#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ZoneMapChallengeEntry.generated.h"

class UChallenge;

USTRUCT(BlueprintType)
struct FZoneMapChallengeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString ChallengeActorName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTransform ChallengeWaypointTransform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIntPoint ChallengeWaypointFODTexelCoords;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSubclassOf<UChallenge> ChallengeClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid ChallengeGUID;
    
    OAKGAME_API FZoneMapChallengeEntry();
};

