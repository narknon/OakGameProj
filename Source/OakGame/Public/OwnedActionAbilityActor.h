#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OakActionAbilityOwnedResourceInterface.h"
#include "OwnedActionAbilityActor.generated.h"

class UOakActionAbility;
class AOakCharacter_Player;

UCLASS(Abstract)
class AOwnedActionAbilityActor : public AActor, public IOakActionAbilityOwnedResourceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bBlocksActionAbilityShutdown;
    
private:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility* OwnerActionAbility;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AOakCharacter_Player* OwnerPlayer;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsShuttingDown, meta=(AllowPrivateAccess=true))
    bool bIsShuttingDown;
    
public:
    AOwnedActionAbilityActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReleaseFromActionAbility();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShutdownRequested(bool bForced);
    
private:
    UFUNCTION()
    void OnRep_IsShuttingDown();
    
protected:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float GetMaxTime() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

