#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MissionEventReference.h"
#include "EMissionObjectiveSetStatus.h"
#include "EMissionStatus.h"
#include "EMissionObjectiveStatus.h"
#include "MissionObjectiveReference.h"
#include "MissionObjectiveSetReference.h"
#include "MissionObjectiveReferenceWeak.h"
#include "MissionFunctionLibrary.generated.h"

class UObject;
class UMission;
class UMissionObjectiveSet;

UCLASS(BlueprintType)
class GBXMISSION_API UMissionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMissionFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void UpdateMissionObjectiveRef(UObject* WorldContextObject, FMissionObjectiveReference ObjectiveRef);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void TrackPreviousActiveMissionInList(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void TrackNextActiveMissionInList(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void TrackActiveMission(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SendMissionEventWithContext(FMissionEventReference EventRef, UObject* WorldContextObject, UObject* OptionalContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SendMissionEvent(UObject* WorldContextObject, FMissionEventReference EventRef, UObject* OptionalContext);
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<UMission> ResolveMissionSoftClassReference(TSoftClassPtr<UMission> Mission);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void JumpToMissionObjectiveSetRef(UObject* WorldContextObject, FMissionObjectiveSetReference ObjectiveSetRef, bool bIsBranchingMission);
    
    UFUNCTION()
    static void GetSoftObjectiveSetListForMission(TSoftClassPtr<UMission> MissionClass, TArray<TSoftObjectPtr<UMissionObjectiveSet>>& SoftObjectiveSetList);
    
    UFUNCTION(BlueprintPure)
    static int32 GetPlotMissionIndex(UMission* MissionObj);
    
    UFUNCTION()
    static void GetObjectiveSetNameListForMissionFromAssetSubclass(TSoftClassPtr<UMission> MissionClass, TArray<FName>& NamesList);
    
    UFUNCTION()
    static void GetObjectiveSetNameListForMission(TSubclassOf<UMission> MissionClass, TArray<FName>& NamesList);
    
    UFUNCTION()
    static void GetObjectiveSetListForMission(TSubclassOf<UMission> MissionClass, TArray<UMissionObjectiveSet*>& ObjectiveSetList);
    
    UFUNCTION()
    static void GetObjectiveNameListForMissionFromAssetSubclass(TSoftClassPtr<UMission> Mission, TArray<FName>& NamesList);
    
    UFUNCTION()
    static void GetObjectiveNameListForMission(TSubclassOf<UMission> MissionClass, TArray<FName>& NamesList);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static TEnumAsByte<EMissionStatus> GetMissionStatus(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static TEnumAsByte<EMissionObjectiveStatus> GetMissionObjectiveStatusRef(UObject* WorldContextObject, FMissionObjectiveReference ObjectiveRef, UObject* OptionalContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static TEnumAsByte<EMissionObjectiveSetStatus> GetMissionObjectiveSetStatusRef(UObject* WorldContextObject, FMissionObjectiveSetReference ObjectiveSetRef);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void GetMissionObjectiveCount(UObject* WorldContextObject, FMissionObjectiveReference ObjectiveRef, int32& CurrentObjectiveCount, int32& TotalObjectiveCount);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMissionLevel(UMission* MissionObj);
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<UMission> GetMissionClassFromObjectiveReferenceWeak(FMissionObjectiveReferenceWeak ObjectiveReference);
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<UMission> GetMissionClassFromObjectiveReference(FMissionObjectiveReference ObjectiveReference);
    
    UFUNCTION(BlueprintCallable)
    static UMission* GetMission(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass);
    
    UFUNCTION()
    static void GetEventNameListForMission(TSubclassOf<UMission> MissionClass, TArray<FName>& NamesList);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static TSubclassOf<UMission> GetCurrentlyTrackedMission(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UMission> GetActivePlotMission(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static TArray<UMission*> GetActiveMissions(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void FillMissionObjectiveSetRef(UPARAM(Ref) FMissionObjectiveSetReference& MissionObjectiveSetRef, UPARAM(Ref) TSubclassOf<UMission>& MissionClass, FName ObjectiveSet);
    
    UFUNCTION(BlueprintCallable)
    static void FillMissionObjectiveRefWeak(UPARAM(Ref) FMissionObjectiveReferenceWeak& MissionObjectiveRef, UPARAM(Ref) TSubclassOf<UMission>& MissionClass, FName Objective);
    
    UFUNCTION(BlueprintCallable)
    static void FillMissionObjectiveRef(UPARAM(Ref) FMissionObjectiveReference& MissionObjectiveRef, UPARAM(Ref) TSubclassOf<UMission>& MissionClass, FName Objective);
    
    UFUNCTION(BlueprintCallable)
    static void FillMissionEventRef(UPARAM(Ref) FMissionEventReference& MissionEventRef, UPARAM(Ref) TSubclassOf<UMission>& MissionClass, FName EventName);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_MissionObjectiveSetReference(FMissionObjectiveSetReference A, FMissionObjectiveSetReference B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_MissionObjectiveReference(FMissionObjectiveReference A, FMissionObjectiveReference B);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void DebugJumpToMissionObjectiveSetRef(UObject* WorldContextObject, FMissionObjectiveSetReference ObjectiveSetRef, bool bIsBranchingMission);
    
    UFUNCTION(BlueprintCallable)
    static UMission* CreateMission(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CompleteMission(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AdvanceToBreadcrumbObjective(UObject* WorldContextObject, FMissionObjectiveReference BreadcrumbObjectiveRef);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AdvanceMissionObjectiveSetRef(UObject* WorldContextObject, FMissionObjectiveSetReference ObjectiveSetRef);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateMissionAtObjectiveSet(UObject* WorldContextObject, FMissionObjectiveSetReference ObjectiveSetRef);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateMission(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass);
    
};

