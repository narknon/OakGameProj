#pragma once
#include "CoreMinimal.h"
#include "EGeyserState.h"
#include "InteractiveObject.h"
#include "Geyser.generated.h"

class UCapsuleComponent;
class UParticleSystemComponent;
class UGeyserAlwaysOnData;

UCLASS()
class AGeyser : public AInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCapsuleComponent* CapsuleCollision;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UParticleSystemComponent* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UParticleSystemComponent* ParticleSystemAnticipation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGeyserAlwaysOnData* GeyserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoAdjustParticleToCapsuleHeight;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_GeyserState)
    EGeyserState GeyserState;
    
    AGeyser();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSteamOn();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSteamOff();
    
private:
    UFUNCTION()
    void OnRep_GeyserState();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnAnticipationStopped();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnAnticipationStarted();
    
    UFUNCTION(BlueprintPure)
    EGeyserState GetGeyserState() const;
    
};

