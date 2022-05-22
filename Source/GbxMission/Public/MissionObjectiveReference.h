#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MissionObjectiveReferenceBase.h"
#include "MissionObjectiveReference.generated.h"

class UMission;

USTRUCT(BlueprintType)
struct GBXMISSION_API FMissionObjectiveReference : public FMissionObjectiveReferenceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UMission> Mission;
    
    FMissionObjectiveReference();
};

