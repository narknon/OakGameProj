#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EMissionEvent.h"
#include "MissionObserverMissionUpdateDelegate.generated.h"

class UMission;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionObserverMissionUpdate, TSubclassOf<UMission>, Mission, EMissionEvent, MissionEvent);

