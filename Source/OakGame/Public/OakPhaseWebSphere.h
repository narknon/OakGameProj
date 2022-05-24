#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OwnedActionAbilityActor.h"
#include "PhaseTranceActivationComboData.h"
#include "OakPhaseWebSphereListLock.h"
#include "OakPhaseWebSphere_SharedDamageData.h"
#include "OakPhaseWebSphereLinkedTargetList.h"
#include "Engine/EngineTypes.h"
#include "OakPhaseWebSphereLinkedTargetItem.h"
#include "OakPhaseWebSphereBeamData.h"
#include "OakPhaseWebSphere.generated.h"

class UOakActionAbility_PhaseTrance;
class AActor;
class AOakCharacter;
class UDamageSource;
class UTeamComponent;
class UPrimitiveComponent;

UCLASS()
class AOakPhaseWebSphere : public AOwnedActionAbilityActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPhaseTranceActivationComboData ActivationComboData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UDamageSource>> IgnoredLinkDamageSourceClasses;
    
    UPROPERTY(EditDefaultsOnly)
    float SapDamageReturnRate;
    
    UPROPERTY(EditDefaultsOnly)
    float SphereOutOfBoundsBuffer;
    
    UPROPERTY(Transient)
    UOakActionAbility_PhaseTrance* CachedOwnerActionAbilityPhaseTrance;
    
    UPROPERTY(Export, Transient)
    UTeamComponent* OwnerTeam;
    
    UPROPERTY(Replicated, Transient)
    FOakPhaseWebSphereLinkedTargetList LinkedTargetList;
    
    UPROPERTY(Transient)
    FOakPhaseWebSphereListLock ListLock;
    
public:
    AOakPhaseWebSphere();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveAllWebTargets();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWebTargetRemoved(AOakCharacter* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWebTargetAdded(AOakCharacter* Target);
    
private:
    UFUNCTION()
    void OnEndActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintPure)
    TArray<FOakPhaseWebSphereLinkedTargetItem> GetWebTargets() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool GetSharedDamageData(AOakCharacter* LinkedTarget, float Damage, TSubclassOf<UDamageSource> DamageSourceClass, FOakPhaseWebSphere_SharedDamageData& SharedDamageData);
    
    UFUNCTION(BlueprintPure)
    UOakActionAbility_PhaseTrance* GetOwnerActionAbilityPhaseTrance() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetBeamDataForLinkedTarget(AOakCharacter* LinkedTarget, FOakPhaseWebSphereBeamData& outBeamData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplySapRefund(float RawAccumulateDamage);
    
};

