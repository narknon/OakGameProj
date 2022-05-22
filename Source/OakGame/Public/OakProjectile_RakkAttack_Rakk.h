#pragma once
#include "CoreMinimal.h"
#include "OakProjectile_ActionAbility.h"
#include "EOakActionAbilityPetModType.h"
#include "UObject/NoExportTypes.h"
#include "OakActionAbilityEnumMaskHelper.h"
#include "OakProjectile_RakkAttack_Rakk.generated.h"

class UOakActionAbility_RakkAttack;
class AActor;

UCLASS()
class AOakProjectile_RakkAttack_Rakk : public AOakProjectile_ActionAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility_RakkAttack* OwnerAbilityRakkAttack;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    FGuid RakkTeamID;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RuntimeMods)
    FOakActionAbilityEnumMaskHelper RuntimeMods;
    
public:
    AOakProjectile_RakkAttack_Rakk();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetupRuntimeMods();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNewHomingTarget(AActor* NewHomingTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReturnToOwner();
    
private:
    UFUNCTION()
    void OnRep_RuntimeMods();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasRuntimeMod(EOakActionAbilityPetModType ModType) const;
    
};

