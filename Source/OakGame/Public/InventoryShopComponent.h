#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventoryListComponent.h"
#include "ItemPoolCollection.h"
#include "AttributeInitializationData.h"
#include "InventoryShopComponent.generated.h"

class AOakPlayerController;
class AActor;
class UItemPoolData;
class UAttributeInitializer;
class UInventoryCategoryData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInventoryShopComponent : public UInventoryListComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FItemPoolCollection StandardItemPools;
    
    UPROPERTY(EditDefaultsOnly)
    UItemPoolData* FeaturedItemPool;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData FeaturedItemGameStage;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAttributeInitializer> GameStageVarianceFormula;
    
    UPROPERTY(EditDefaultsOnly)
    bool bGuaranteeEndGamePartForLoot;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData StandardItemMarkup;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData FeaturedItemMarkup;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData GearSoldByFriendsMarkup;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* OverridePrimaryCurrency;
    
    UPROPERTY(EditDefaultsOnly)
    float InventoryRelevancyDistance;
    
    UPROPERTY(Transient)
    FItemPoolCollection RandomlySelectedItemPools;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_FeaturedInventory)
    TArray<AActor*> FeaturedInventoryList;
    
    UPROPERTY(Transient)
    TArray<AOakPlayerController*> InstancedForPlayers;
    
    UPROPERTY(Replicated, Transient)
    uint32 LastResetCounter;
    
    UPROPERTY(Transient)
    uint32 MayhemLevel;
    
public:
    UInventoryShopComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_FeaturedInventory();
    
    UFUNCTION()
    void HandleOwnerExperienceLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel);
    
    UFUNCTION()
    void HandleActorDestroyed(AActor* Actor);
    
};

