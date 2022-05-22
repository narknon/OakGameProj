#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "OakElementalEffectBucketProviderInterface.h"
#include "HealthDamagePassthroughInterface.h"
#include "ElementalInteractionManagerPostPhysicsTickFunction.h"
#include "ActorElementalDamageData.h"
#include "ElementalInteractionManager.generated.h"

class UElementalInteractionComponent;
class UDamageSource;
class ALargeLiquidBody;
class AElementalPuddle;
class ASplat;
class UMaterialInstanceDynamic;

UCLASS(NotPlaceable, Transient)
class AElementalInteractionManager : public AActor, public IOakElementalEffectBucketProviderInterface, public IHealthDamagePassthroughInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FElementalInteractionManagerPostPhysicsTickFunction PostPhysicsTickFunction;
    
    UPROPERTY(Transient)
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY(Transient)
    TMap<AActor*, FActorElementalDamageData> ActorsTakingDamage;
    
    UPROPERTY(Export, Transient)
    TArray<UElementalInteractionComponent*> ComponentsNeedingSourceUpdate;
    
    UPROPERTY(Export, Transient)
    TArray<UElementalInteractionComponent*> ComponentsNeedingTransitionUpdate;
    
    UPROPERTY(Transient)
    TArray<ALargeLiquidBody*> LargeLiquidBodies;
    
    UPROPERTY(Transient)
    TArray<AElementalPuddle*> TickingPuddles;
    
    UPROPERTY(Transient)
    TArray<AElementalPuddle*> PendingPuddleCollisionUpdates;
    
    UPROPERTY(Transient)
    TArray<ASplat*> TickingSplats;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamicPool;
    
public:
    AElementalInteractionManager();
    
    // Fix for true pure virtual functions not being implemented
};

