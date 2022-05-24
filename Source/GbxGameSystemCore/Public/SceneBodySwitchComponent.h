#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SceneComponentSwitchRecord.h"
#include "SceneBodySwitchComponent.generated.h"

class USceneBodySwitchAction;
class UWwiseAudioComponent;
class UWwiseEvent;
class UParticleSystemComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API USceneBodySwitchComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName DefaultState;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    USceneBodySwitchAction* DetachAction;
    
private:
    UPROPERTY(Transient)
    TArray<FSceneComponentSwitchRecord> ComponentRecords;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedState)
    TArray<int8> ReplicatedState;
    
public:
    USceneBodySwitchComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ReplicatedState();
    
    UFUNCTION()
    void HandleWwiseEventFinished(UWwiseAudioComponent* WAC, UWwiseEvent* WwiseEvent);
    
    UFUNCTION()
    void HandleParticleSystemFinished(UParticleSystemComponent* PSC);
    
    UFUNCTION()
    void GetValidSwitchStateNames(TArray<FName>& OutNames) const;
    
};

