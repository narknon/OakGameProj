#pragma once
#include "CoreMinimal.h"
#include "OakProjectile.h"
#include "OakActionAbilityOwnedResourceInterface.h"
#include "OakProjectile_ActionAbility.generated.h"

class UOakActionAbility;
class AOakCharacter_Player;
class UGbxCustomizationComponent;

UCLASS(Abstract)
class AOakProjectile_ActionAbility : public AOakProjectile, public IOakActionAbilityOwnedResourceInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility* OwnerActionAbility;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakCharacter_Player* OwnerPlayer;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGbxCustomizationComponent* CustomizationComponent;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBlocksActionAbilityShutdown;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWasShutDownGracefully;
    
public:
    AOakProjectile_ActionAbility();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReleaseFromActionAbility();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShutdownGracefully();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReceivedOwnerPlayer();
    
    
    // Fix for true pure virtual functions not being implemented
};

