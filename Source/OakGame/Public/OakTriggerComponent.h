#pragma once
#include "CoreMinimal.h"
#include "MissionObserverInterface.h"
#include "Components/ActorComponent.h"
#include "OakTouchedTriggerDelegateDelegate.h"
#include "OakUnTouchedTriggerDelegateDelegate.h"
#include "OakTriggerDelegateDelegate.h"
#include "Engine/EngineTypes.h"
#include "EOakTriggerComponentEventType.h"
#include "OakTriggerComponent.generated.h"

class UGbxCondition;
class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakTriggerComponent : public UActorComponent, public IMissionObserverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOakTouchedTriggerDelegate TouchedTrigger;
    
    UPROPERTY(BlueprintAssignable)
    FOakUnTouchedTriggerDelegate UnTouchedTrigger;
    
    UPROPERTY(BlueprintAssignable)
    FOakTriggerDelegate AllPlayersTouchingTrigger;
    
    UPROPERTY(EditAnywhere)
    int32 MaxTriggerEvents;
    
    UPROPERTY(EditAnywhere)
    float TriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGbxCondition* EnabledCondition;
    
    UPROPERTY(EditAnywhere)
    bool bPlayerInstigatedEventsOnly;
    
    UPROPERTY(EditAnywhere)
    bool bUseSelfAsSecondContext;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* ActorCanTriggerCondition;
    
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ValidComponentNames;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> TrackedTouchPrimitives;
    
public:
    UOakTriggerComponent();
    UFUNCTION(BlueprintCallable)
    void ResetTrigger();
    
private:
    UFUNCTION()
    void NotifyActorComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void NotifyActorComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleTriggerEvents(AActor* OtherActor, EOakTriggerComponentEventType EVENTTYPE, UPrimitiveComponent* OptionalTouchedComponent);
    
private:
    UFUNCTION()
    void GetValidComponentNames(TArray<FName>& ComponentNames) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableTrigger(bool bEnableTrigger);
    
    
    // Fix for true pure virtual functions not being implemented
};

