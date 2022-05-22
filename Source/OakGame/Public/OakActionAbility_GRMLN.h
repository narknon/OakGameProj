#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakActionAbility.h"
#include "EGRMLNModType.h"
#include "OakActionAbilityEnumMaskHelper.h"
#include "OakActionAbility_GRMLN.generated.h"

class UOakActionAbilityAugmentData_GRMLN;
class ACommandRing_Operative_GRMLN;
class AOakDroneProjectile_GRMLN;

UCLASS()
class UOakActionAbility_GRMLN : public UOakActionAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ACommandRing_Operative_GRMLN> CommandRingClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UOakActionAbilityAugmentData_GRMLN*> PassiveMods;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AOakDroneProjectile_GRMLN* PrimaryDrone;
    
    UPROPERTY(Replicated, Transient)
    FOakActionAbilityEnumMaskHelper RuntimeMods;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    ACommandRing_Operative_GRMLN* CommandRing;
    
public:
    UOakActionAbility_GRMLN();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    AOakDroneProjectile_GRMLN* TrySpawnPrimaryDrone();
    
    UFUNCTION(BlueprintImplementableEvent)
    void TryFindNewDroneTarget();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnPrimaryDrone();
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopCalledShot();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartCalledShot();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerFindNewDroneTarget();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopCalledShot();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartCalledShot();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSafeguardProtocolActivated();
    
    UFUNCTION(BlueprintPure)
    bool IsSafeguardProtocolActive() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool HasGRMLNMod(EGRMLNModType InModType) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    float GetGoodMisfortuneRechargeValue(int32 TotalKills) const;
    
};

