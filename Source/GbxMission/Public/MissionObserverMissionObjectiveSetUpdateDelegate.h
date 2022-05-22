#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveSetReference.h"
#include "EMissionObjectiveSetEvent.h"
#include "MissionObserverMissionObjectiveSetUpdateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionObserverMissionObjectiveSetUpdate, FMissionObjectiveSetReference, ObjectiveSet, EMissionObjectiveSetEvent, ObjectiveSetEvent);

