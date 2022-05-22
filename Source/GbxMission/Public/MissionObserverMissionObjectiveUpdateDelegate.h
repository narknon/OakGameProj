#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveReference.h"
#include "EMissionObjectiveEvent.h"
#include "MissionObserverMissionObjectiveUpdateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMissionObserverMissionObjectiveUpdate, FMissionObjectiveReference, Objective, EMissionObjectiveEvent, ObjectiveEvent, int32, ObjectiveCount);

