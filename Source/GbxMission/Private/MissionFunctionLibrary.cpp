#include "MissionFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class UMissionObjectiveSet;
class UMission;

void UMissionFunctionLibrary::UpdateMissionObjectiveRef(UObject* WorldContextObject, FMissionObjectiveReference ObjectiveRef) {
}

void UMissionFunctionLibrary::TrackPreviousActiveMissionInList(UObject* WorldContextObject) {
}

void UMissionFunctionLibrary::TrackNextActiveMissionInList(UObject* WorldContextObject) {
}

void UMissionFunctionLibrary::TrackActiveMission(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass) {
}

void UMissionFunctionLibrary::SendMissionEventWithContext(FMissionEventReference EventRef, UObject* WorldContextObject, UObject* OptionalContext) {
}

void UMissionFunctionLibrary::SendMissionEvent(UObject* WorldContextObject, FMissionEventReference EventRef, UObject* OptionalContext) {
}

TSubclassOf<UMission> UMissionFunctionLibrary::ResolveMissionSoftClassReference(TSoftClassPtr<UMission> Mission) {
    return NULL;
}

void UMissionFunctionLibrary::JumpToMissionObjectiveSetRef(UObject* WorldContextObject, FMissionObjectiveSetReference ObjectiveSetRef, bool bIsBranchingMission) {
}

void UMissionFunctionLibrary::GetSoftObjectiveSetListForMission(TSoftClassPtr<UMission> MissionClass, TArray<TSoftObjectPtr<UMissionObjectiveSet>>& SoftObjectiveSetList) {
}

int32 UMissionFunctionLibrary::GetPlotMissionIndex(UMission* MissionObj) {
    return 0;
}

void UMissionFunctionLibrary::GetObjectiveSetNameListForMissionFromAssetSubclass(TSoftClassPtr<UMission> MissionClass, TArray<FName>& NamesList) {
}

void UMissionFunctionLibrary::GetObjectiveSetNameListForMission(TSubclassOf<UMission> MissionClass, TArray<FName>& NamesList) {
}

void UMissionFunctionLibrary::GetObjectiveSetListForMission(TSubclassOf<UMission> MissionClass, TArray<UMissionObjectiveSet*>& ObjectiveSetList) {
}

void UMissionFunctionLibrary::GetObjectiveNameListForMissionFromAssetSubclass(TSoftClassPtr<UMission> Mission, TArray<FName>& NamesList) {
}

void UMissionFunctionLibrary::GetObjectiveNameListForMission(TSubclassOf<UMission> MissionClass, TArray<FName>& NamesList) {
}

TEnumAsByte<EMissionStatus> UMissionFunctionLibrary::GetMissionStatus(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass) {
    return MS_NotStarted;
}

TEnumAsByte<EMissionObjectiveStatus> UMissionFunctionLibrary::GetMissionObjectiveStatusRef(UObject* WorldContextObject, FMissionObjectiveReference ObjectiveRef, UObject* OptionalContext) {
    return MOS_NotStarted;
}

TEnumAsByte<EMissionObjectiveSetStatus> UMissionFunctionLibrary::GetMissionObjectiveSetStatusRef(UObject* WorldContextObject, FMissionObjectiveSetReference ObjectiveSetRef) {
    return MOSS_NotActive;
}

void UMissionFunctionLibrary::GetMissionObjectiveCount(UObject* WorldContextObject, FMissionObjectiveReference ObjectiveRef, int32& CurrentObjectiveCount, int32& TotalObjectiveCount) {
}

int32 UMissionFunctionLibrary::GetMissionLevel(UMission* MissionObj) {
    return 0;
}

TSubclassOf<UMission> UMissionFunctionLibrary::GetMissionClassFromObjectiveReferenceWeak(FMissionObjectiveReferenceWeak ObjectiveReference) {
    return NULL;
}

TSubclassOf<UMission> UMissionFunctionLibrary::GetMissionClassFromObjectiveReference(FMissionObjectiveReference ObjectiveReference) {
    return NULL;
}

UMission* UMissionFunctionLibrary::GetMission(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass) {
    return NULL;
}

void UMissionFunctionLibrary::GetEventNameListForMission(TSubclassOf<UMission> MissionClass, TArray<FName>& NamesList) {
}

TSubclassOf<UMission> UMissionFunctionLibrary::GetCurrentlyTrackedMission(UObject* WorldContextObject) {
    return NULL;
}

TSubclassOf<UMission> UMissionFunctionLibrary::GetActivePlotMission(UObject* WorldContextObject) {
    return NULL;
}

TArray<UMission*> UMissionFunctionLibrary::GetActiveMissions(UObject* WorldContextObject) {
    return TArray<UMission*>();
}

void UMissionFunctionLibrary::FillMissionObjectiveSetRef(FMissionObjectiveSetReference& MissionObjectiveSetRef, TSubclassOf<UMission>& MissionClass, FName ObjectiveSet) {
}

void UMissionFunctionLibrary::FillMissionObjectiveRefWeak(FMissionObjectiveReferenceWeak& MissionObjectiveRef, TSubclassOf<UMission>& MissionClass, FName Objective) {
}

void UMissionFunctionLibrary::FillMissionObjectiveRef(FMissionObjectiveReference& MissionObjectiveRef, TSubclassOf<UMission>& MissionClass, FName Objective) {
}

void UMissionFunctionLibrary::FillMissionEventRef(FMissionEventReference& MissionEventRef, TSubclassOf<UMission>& MissionClass, FName EventName) {
}

bool UMissionFunctionLibrary::EqualEqual_MissionObjectiveSetReference(FMissionObjectiveSetReference A, FMissionObjectiveSetReference B) {
    return false;
}

bool UMissionFunctionLibrary::EqualEqual_MissionObjectiveReference(FMissionObjectiveReference A, FMissionObjectiveReference B) {
    return false;
}

void UMissionFunctionLibrary::DebugJumpToMissionObjectiveSetRef(UObject* WorldContextObject, FMissionObjectiveSetReference ObjectiveSetRef, bool bIsBranchingMission) {
}

UMission* UMissionFunctionLibrary::CreateMission(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass) {
    return NULL;
}

void UMissionFunctionLibrary::CompleteMission(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass) {
}

void UMissionFunctionLibrary::AdvanceToBreadcrumbObjective(UObject* WorldContextObject, FMissionObjectiveReference BreadcrumbObjectiveRef) {
}

void UMissionFunctionLibrary::AdvanceMissionObjectiveSetRef(UObject* WorldContextObject, FMissionObjectiveSetReference ObjectiveSetRef) {
}

void UMissionFunctionLibrary::ActivateMissionAtObjectiveSet(UObject* WorldContextObject, FMissionObjectiveSetReference ObjectiveSetRef) {
}

void UMissionFunctionLibrary::ActivateMission(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass) {
}

UMissionFunctionLibrary::UMissionFunctionLibrary() {
}

