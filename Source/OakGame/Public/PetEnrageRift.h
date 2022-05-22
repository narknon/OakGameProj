#pragma once
#include "CoreMinimal.h"
#include "OwnedActionAbilityActor.h"
#include "Engine/EngineTypes.h"
#include "PetEnrageRift.generated.h"

class UBeastmasterCharacterComponent;
class AOakCharacter;
class UTeamComponent;
class UPrimitiveComponent;
class UCinematicModeData;
class AActor;

UCLASS()
class APetEnrageRift : public AOwnedActionAbilityActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UBeastmasterCharacterComponent* BeastmasterComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PetActor, meta=(AllowPrivateAccess=true))
    AOakCharacter* PetActor;
    
    UPROPERTY(Export, Transient)
    UTeamComponent* CachedTeamComponent;
    
public:
    APetEnrageRift();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool TeleportPetToCurrentLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartPetSummon();
    
private:
    UFUNCTION()
    void OnRep_PetActor();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPetTeleported();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPetSummonStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPetResurrected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLinkedTargetRemoved(AOakCharacter* InLinkedTarget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLinkedTargetAdded(AOakCharacter* InLinkedTarget);
    
public:
    UFUNCTION()
    void OnCinematicModeChanged(UCinematicModeData* CinematicMode);
    
private:
    UFUNCTION()
    void OnActorExitedSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnActorEnteredSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(Client, Reliable)
    void NotifyServerWaitingOnTeleport();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void NotifyClientTeleport();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UPrimitiveComponent* GetOverlapComponent() const;
    
};

