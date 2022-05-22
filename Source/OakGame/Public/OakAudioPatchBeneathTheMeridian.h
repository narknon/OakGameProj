#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveReference.h"
#include "GameFramework/Actor.h"
#include "EMissionObjectiveEvent.h"
#include "OakAudioPatchBeneathTheMeridian.generated.h"

class AOakVehicle;
class UActorComponent;
class UWwiseEvent;
class UWwiseState;

UCLASS()
class AOakAudioPatchBeneathTheMeridian : public AActor {
    GENERATED_BODY()
public:
    AOakAudioPatchBeneathTheMeridian();
    UFUNCTION()
    void TryStopVehicleMusic();
    
    UFUNCTION()
    void TryBeginVehicleMusic();
    
    UFUNCTION(NetMulticast, Reliable)
    void StopVehicleMusic(UWwiseEvent* WwiseEvent);
    
    UFUNCTION()
    void OnTouchedTurnOnRadioTrigger(AActor* TouchingActor, bool bIsPlayer, UActorComponent* ComponentTouched);
    
    UFUNCTION()
    void OnMissionObjectiveUpdate(FMissionObjectiveReference Objective, EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount);
    
    UFUNCTION()
    void MayaVehicleSpawned(AOakVehicle* MayaVehicle);
    
    UFUNCTION()
    void MayaVehicleDestroyed(AActor* MayaVehicleActor);
    
    UFUNCTION(NetMulticast, Reliable)
    void BeginVehicleMusic(AOakVehicle* Vehicle, UWwiseEvent* WwiseEvent, UWwiseState* WwiseState);
    
};

