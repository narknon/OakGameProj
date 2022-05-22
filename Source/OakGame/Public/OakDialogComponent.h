#pragma once
#include "CoreMinimal.h"
#include "GbxDialogComponent.h"
#include "MissionObserverInterface.h"
#include "MissionObjectiveReference.h"
#include "OakDialogComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakDialogComponent : public UGbxDialogComponent, public IMissionObserverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMissionObjectiveReference AutoActivateOnMissionObjective;
    
    UPROPERTY(EditAnywhere)
    FMissionObjectiveReference AutoDeactivateOnMissionObjective;
    
    UOakDialogComponent();
    
    // Fix for true pure virtual functions not being implemented
};

