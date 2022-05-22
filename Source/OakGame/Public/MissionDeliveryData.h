#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MissionDeliveryData.generated.h"

class UMission;
class AActor;

USTRUCT(BlueprintType)
struct FMissionDeliveryData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TSubclassOf<UMission>> Missions;
    
    UPROPERTY()
    AActor* MissionGiver;
    
    OAKGAME_API FMissionDeliveryData();
};

