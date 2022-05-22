#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MissionObserverMissionsInitializedDelegate.h"
#include "Components/ActorComponent.h"
#include "MissionObserverInterface.h"
#include "MissionReferenceInterface.h"
#include "MissionObserverMissionObjectiveSetUpdateDelegate.h"
#include "MissionObserverMissionUpdateDelegate.h"
#include "MissionObserverMissionObjectiveUpdateDelegate.h"
#include "MissionObserverEvent.h"
#include "MissionEnableConditionEvent.h"
#include "MissionObserverComponent.generated.h"

class UMission;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXMISSION_API UMissionObserverComponent : public UActorComponent, public IMissionObserverInterface, public IMissionReferenceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UMission>> Missions;
    
    UPROPERTY(VisibleAnywhere)
    int32 ObjectiveBit;
    
    UPROPERTY(VisibleAnywhere)
    uint32 NumberOfObjectiveBits;
    
    UPROPERTY(EditAnywhere)
    bool bEnableObjectiveBit;
    
    UPROPERTY(BlueprintAssignable)
    FMissionObserverMissionUpdate OnMissionUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FMissionObserverMissionObjectiveUpdate OnMissionObjectiveUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FMissionObserverMissionObjectiveSetUpdate OnMissionObjectiveSetUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FMissionObserverMissionsInitialized OnMissionsInitialized;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMissionObserverEvent> ObserverEventList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMissionEnableConditionEvent> OnLoadEventList;
    
    UMissionObserverComponent();
    UFUNCTION(BlueprintCallable)
    void ObserverMission(TSubclassOf<UMission> MissionClass);
    
    UFUNCTION(BlueprintCallable)
    bool GetUpdateEventObject(TArray<UObject*>& OutMissionInitialized, TArray<UObject*>& OutMissionUpdate, TArray<UObject*>& OutMissionObjectiveUpdate, TArray<UObject*>& OutMissionObjectiveSetUpdate);
    
    
    // Fix for true pure virtual functions not being implemented
};

