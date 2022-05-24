#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxUIFormattedText.h"
#include "Components/SceneComponent.h"
#include "MissionReferenceInterface.h"
#include "MissionIconInterface.h"
#include "MissionObjectiveSetReference.h"
#include "MissionObserverInterface.h"
#include "MissionDirectorDisabledDelegate.h"
#include "MissionDirectorEnabledDelegate.h"
#include "MissionDirectorMissionsInitializedDelegate.h"
#include "EMissionAvailableResult.h"
#include "EMissionActiveResult.h"
#include "MissionDirectorComponent.generated.h"

class UGbxCondition;
class UMission;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXMISSION_API UMissionDirectorComponent : public USceneComponent, public IMissionObserverInterface, public IMissionIconInterface, public IMissionReferenceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UMission>> Missions;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMissionObjectiveSetReference> MissionEntryPoints;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* MissionDirectorEnableCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxUIFormattedText MissionDirectorName;
    
    UPROPERTY(BlueprintAssignable)
    FMissionDirectorEnabled OnMissionDirectorEnabled;
    
    UPROPERTY(BlueprintAssignable)
    FMissionDirectorDisabled OnMissionDirectorDisabled;
    
    UPROPERTY(BlueprintAssignable)
    FMissionDirectorMissionsInitialized OnMissionsInitialized;
    
    UMissionDirectorComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void IsAnyMissionAvailable(TEnumAsByte<EMissionAvailableResult>& OutResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void IsAnyMissionActive(TEnumAsByte<EMissionActiveResult>& OutResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GetAllMissions(TArray<TSubclassOf<UMission>>& AllMissions);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearMissions();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddMission(TSubclassOf<UMission> InMission);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivateAvailableMission();
    
    
    // Fix for true pure virtual functions not being implemented
};

