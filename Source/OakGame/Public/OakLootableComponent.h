#pragma once
#include "CoreMinimal.h"
#include "LootableComponent.h"
#include "AttributeEffectData.h"
#include "OakLootableComponent.generated.h"

class ULootSpawnPatternData;
class ADroppedInventoryItemPickup;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakLootableComponent : public ULootableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceNoInstancedLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNoLootBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAttributeEffectData> SpawnLootAttributeEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DropLootSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULootSpawnPatternData* DropLootPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeToSpawnLootOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpawnAttachedLootHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LootEnabledDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LootAutoPickupPlayerTriggerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideAutoLootDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoLootDelayOverride;
    
    UPROPERTY(EditAnywhere)
    float MaxDeferredSpawnDelay;
    
    UOakLootableComponent();
private:
    UFUNCTION()
    void HandlePickupSpawned(ADroppedInventoryItemPickup* Pickup);
    
public:
    UFUNCTION(BlueprintCallable)
    void DetachAttachedLoot(ADroppedInventoryItemPickup* Pickup, ULootSpawnPatternData* DropPattern);
    
    UFUNCTION(BlueprintCallable)
    void DetachAllAttachedLoot(ULootSpawnPatternData* DropPattern);
    
};

