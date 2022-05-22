#include "OakLevelScriptActor.h"
#include "MissionObserverComponent.h"

AOakLevelScriptActor::AOakLevelScriptActor() {
    this->LevelMissionObserver = CreateDefaultSubobject<UMissionObserverComponent>(TEXT("MissionObserver"));
}

