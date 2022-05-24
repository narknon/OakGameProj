#pragma once
#include "CoreMinimal.h"
#include "DamageReactionEvent.h"
#include "GameResourcePoolReference.h"
#include "HitRegionState.generated.h"

class UHitRegionData;
class UChildActorComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FHitRegionState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UHitRegionData* HitRegion;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> AssociatedComponentNames;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDamageReactionEvent> DamageEvents;
    
    UPROPERTY(Transient)
    int32 StateIndex;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> AssociatedPrimitives;
    
    UPROPERTY(Export, Transient)
    TArray<UChildActorComponent*> AssociatedChildActorComponents;
    
private:
    UPROPERTY(Transient)
    float MaxHealth;
    
    UPROPERTY(Transient)
    float CurrentHealth;
    
    UPROPERTY(Transient)
    FGameResourcePoolReference ResourcePool;
    
public:
    FHitRegionState();
};

