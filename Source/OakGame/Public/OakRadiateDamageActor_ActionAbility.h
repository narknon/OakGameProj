#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OakActionAbilityOwnedResourceInterface.h"
#include "OakRadiateDamageActor.h"
#include "OakElementalEffectBucketProviderInterface.h"
#include "OakRadiateDamageActor_ActionAbility.generated.h"

class UPrimitiveComponent;
class UTeam;
class AActor;
class UOakActionAbility;

UCLASS()
class AOakRadiateDamageActor_ActionAbility : public AOakRadiateDamageActor, public IOakActionAbilityOwnedResourceInterface, public IOakElementalEffectBucketProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CollisionPrimitive;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBlocksActionAbilityShutdown;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bIsShuttingDown;
    
    UPROPERTY(Transient)
    UTeam* OwnerTeam;
    
public:
    AOakRadiateDamageActor_ActionAbility();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitEnemy(AActor* EnemyActor);
    
private:
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UOakActionAbility* K2_GetOwnedActionAbility() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

