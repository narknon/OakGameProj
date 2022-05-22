#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakActionAbility_Beastmaster.h"
#include "AttributeInitializationData.h"
#include "WeaponShotModifierData.h"
#include "OakActionCloak_TrackedTargetState.h"
#include "OakActionAbility_Cloak.generated.h"

class UWeaponShotModifier;
class UDamageSource;
class AWeapon;
class AActor;

UCLASS()
class UOakActionAbility_Cloak : public UOakActionAbility_Beastmaster {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData CriticalShotCountInitializer;
    
    UPROPERTY(EditDefaultsOnly)
    UWeaponShotModifier* CriticalShotCountModifier;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UDamageSource>> ValidShotChainDamageSourceClasses;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UDamageSource>> ValidConsumeShotDamageSourceClasses;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TrackedTargetState)
    FOakActionCloak_TrackedTargetState TrackedTargetState;
    
public:
    UOakActionAbility_Cloak();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void TrackTarget(AActor* NewTarget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartInvisibility();
    
private:
    UFUNCTION()
    void OnTrackedTargetDied();
    
    UFUNCTION()
    void OnRep_TrackedTargetState();
    
    UFUNCTION()
    void OnModifiedWeaponShot(AWeapon* Weapon, const FWeaponShotModifierData& Data);
    
};

