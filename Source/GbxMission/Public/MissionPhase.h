#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionPhase.generated.h"

class UMissionObjectiveSet;

UCLASS(BlueprintType)
class GBXMISSION_API UMissionPhase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, DuplicateTransient, VisibleAnywhere)
    TArray<UMissionObjectiveSet*> ObjectiveSets;
    
    UPROPERTY(BlueprintReadOnly, DuplicateTransient, VisibleAnywhere)
    int32 PhaseIndex;
    
    UMissionPhase();
};

