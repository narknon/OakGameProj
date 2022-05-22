#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActionComponentStartDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "InspectionInfoProvider.h"
#include "DataActionPair_SpawnMesh.h"
#include "GbxActionSlot.h"
#include "DataActionPair.h"
#include "DataActionPair_Spawn.h"
#include "DataActionPair_SmartObject.h"
#include "ActionComponentStopDelegateDelegate.h"
#include "EGbxActionEndState.h"
#include "ActionState_Base.h"
#include "GbxActionComponent.generated.h"

class UGbxAction_Loop;
class UGbxAction;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UGbxActionComponent : public UActorComponent, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FGbxActionSlot> ActionSlots;
    
public:
    UPROPERTY(EditAnywhere)
    TArray<FDataActionPair> EditorKeyedActionList;
    
    UPROPERTY(EditAnywhere)
    TArray<FDataActionPair_Spawn> SpawnKeyedActionList;
    
    UPROPERTY(EditAnywhere)
    TArray<FDataActionPair_SpawnMesh> SpawnMeshKeyedActionList;
    
    UPROPERTY(EditAnywhere)
    TArray<FDataActionPair_SmartObject> SmartObjectKeyedActionList;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FActionComponentStartDelegate OnActionStarted;
    
    UPROPERTY(BlueprintAssignable)
    FActionComponentStopDelegate OnActionStopped;
    
public:
    UGbxActionComponent();
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void UpdateActionRemoteServer(FActionState_Base ActionData);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void StopOnRemoteServer(int32 ManagerRepId, const EGbxActionEndState& EndState);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopLoopingActionClass(TSubclassOf<UGbxAction_Loop> ActionClass);
    
    UFUNCTION(BlueprintCallable)
    void StopActionSlot(const FName ActionSlotName);
    
    UFUNCTION(BlueprintCallable)
    void StopActions();
    
    UFUNCTION(BlueprintCallable)
    void StopActionClass(TSubclassOf<UGbxAction> ActionClass);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void PlayOnRemoteServer(TSubclassOf<UGbxAction> ActionClass, FActionState_Base ActionData);
    
    UFUNCTION()
    void OnComponentUnregistered(UActorComponent* ActorComponent);
    
    UFUNCTION()
    void OnComponentDetached(USceneComponent* SceneComponent);
    
    UFUNCTION()
    void OnComponentAttached(USceneComponent* SceneComponent);
    
public:
    UFUNCTION()
    void NotifyInterruptRequest();
    
    UFUNCTION(BlueprintCallable)
    UGbxAction* K2_Play(TSubclassOf<UGbxAction> ActionClass);
    
private:
    UFUNCTION(BlueprintPure)
    bool K2_IsPlayingObj(UGbxAction* Action) const;
    
    UFUNCTION(BlueprintPure)
    UGbxAction* K2_GetActionBySlot(const FName ActionSlotName) const;
    
    UFUNCTION(BlueprintPure)
    UGbxAction* K2_GetActionByClass(TSubclassOf<UGbxAction> ActionClass) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayingSlot(const FName& ActionSlotName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingClass(TSubclassOf<UGbxAction> ActionClass) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

