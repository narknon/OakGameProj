#pragma once
#include "CoreMinimal.h"
#include "GbxDebugMenuSubmenu.h"
#include "GbxCascadingListItemData.h"
#include "EMissionStatus.h"
#include "EMissionDebugStatus.h"
#include "MissionDebugMenu.generated.h"

class UMissionGraph;
class UMission;

UCLASS(EditInlineNew)
class GBXMISSION_API UMissionDebugMenu : public UGbxDebugMenuSubmenu {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UMissionGraph* MissionGraphToUse;
    
    UPROPERTY(BlueprintReadWrite)
    bool bDisplayObjectName;
    
private:
    UPROPERTY()
    TArray<UMission*> Missions;
    
public:
    UMissionDebugMenu();
    UFUNCTION(BlueprintCallable)
    void SelectMissionGraph(const FName& MissionGraphId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void NotifyMissionActivationCheatStart() const;
    
    UFUNCTION(BlueprintPure)
    void GetObjectiveSetItemsForMission(const FName& MissionId, TArray<FGbxCascadingListItemData>& OutItems) const;
    
    UFUNCTION(BlueprintPure)
    UMission* GetMissionWithId(const FName& MissionId) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EMissionStatus> GetMissionStatus(const FName& MissionId) const;
    
    UFUNCTION(BlueprintCallable)
    void GetItemsForMissionStatus(TEnumAsByte<EMissionDebugStatus> Status, TArray<FGbxCascadingListItemData>& OutItems);
    
    UFUNCTION(BlueprintCallable)
    void GetItemsForMissionGraph(TArray<FGbxCascadingListItemData>& OutItems);
    
    UFUNCTION(BlueprintCallable)
    void CompleteMission(const FName& MissionId);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceToObjectiveSet(const FName& MissionId, const FName& ObjectiveSetId);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceMission(const FName& MissionId);
    
};

