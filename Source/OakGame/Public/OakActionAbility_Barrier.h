#pragma once
#include "CoreMinimal.h"
#include "OakActionAbility.h"
#include "UObject/NoExportTypes.h"
#include "OakActionAbilityEnumMaskHelper.h"
#include "EOperativeBarrierModType.h"
#include "OakActionAbility_Barrier.generated.h"

class UOakActionAbilityAugmentData_Barrier;
class AOperativeBarrier;
class AActor;

UCLASS()
class UOakActionAbility_Barrier : public UOakActionAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    FOakActionAbilityEnumMaskHelper RuntimeMods;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UOakActionAbilityAugmentData_Barrier*> PassiveMods;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AOperativeBarrier* BarrierActor;
    
public:
    UOakActionAbility_Barrier();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool TryPlaceBarrierAtLocation(FTransform Transform);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void TryDropPickup();
    
    UFUNCTION(BlueprintImplementableEvent)
    AOperativeBarrier* SpawnNewBarrier(FTransform Transform);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDoBarrierDropPickup();
    
    UFUNCTION()
    void OnBarrierDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasRuntimeMod(EOperativeBarrierModType ModType) const;
    
};

