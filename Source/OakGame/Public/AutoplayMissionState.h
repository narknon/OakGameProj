#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AutoplayAction.h"
#include "AutoplayMissionState.generated.h"

class UMission;
class UObject;

USTRUCT(BlueprintType)
struct FAutoplayMissionState {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FAutoplayAction> PossibleActions;
    
    UPROPERTY(Transient)
    TSubclassOf<UMission> CurrentMission;
    
    UPROPERTY(Transient)
    UObject* CurrentObjective;
    
    OAKGAME_API FAutoplayMissionState();
};

