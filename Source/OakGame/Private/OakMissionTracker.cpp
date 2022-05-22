#include "OakMissionTracker.h"
#include "Templates/SubclassOf.h"

class UObject;
class AOakCharacter;
class UMission;

void AOakMissionTracker::OnTravelIDsChanged() {
}

AOakCharacter* AOakMissionTracker::GetMissionCharacterSoft(UObject* WorldContextObject, FSoftClassPath CharacterClass) {
    return NULL;
}

AOakCharacter* AOakMissionTracker::GetMissionCharacter(UObject* WorldContextObject, TSubclassOf<AOakCharacter> CharacterClass) {
    return NULL;
}

void AOakMissionTracker::EnumerateNPCCharactersSoft(TArray<FSoftClassPath>& CharacterClasses) const {
}

void AOakMissionTracker::EnumerateNPCCharacters(TArray<TSubclassOf<AOakCharacter>>& CharacterClasses) const {
}

void AOakMissionTracker::BroadcastFriendEventForCompletion_Implementation(TSubclassOf<UMission> MissionClass) {
}

AOakMissionTracker::AOakMissionTracker() {
    this->ActiveLeagueMissionGraph = NULL;
}

