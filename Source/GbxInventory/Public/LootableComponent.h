#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EPickupLootAttachmentMode.h"
#include "Components/ActorComponent.h"
#include "PickupAttachedDelegateDelegate.h"
#include "PickupDetachedDelegateDelegate.h"
#include "LootConfigurationInfo.h"
#include "UObject/NoExportTypes.h"
#include "LootableComponent.generated.h"

class ULootableBalanceData;
class UGbxAction;
class ADroppedInventoryItemPickup;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXINVENTORY_API ULootableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPickupAttachedDelegate OnPickupAttached;
    
    UPROPERTY(BlueprintAssignable)
    FPickupDetachedDelegate OnPickupDetached;
    
    UPROPERTY(BlueprintAssignable)
    FPickupDetachedDelegate OnAllPickupsDetached;
    
protected:
    UPROPERTY(EditAnywhere)
    ULootableBalanceData* BalanceData;
    
    UPROPERTY(EditAnywhere)
    float InitialDropLootMassScale;
    
    UPROPERTY(EditAnywhere)
    EPickupLootAttachmentMode LootAttachmentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UGbxAction>> LootSpawnActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceSpawnedLootToHaveInfiniteLifespan;
    
    UPROPERTY(EditInstanceOnly)
    FVector UseOverrideBoxExtents;
    
    UPROPERTY(EditInstanceOnly)
    bool bOverrideUseWithBox;
    
    UPROPERTY(Transient)
    TArray<FLootConfigurationInfo> LootConfigurations;
    
    UPROPERTY(Transient)
    TArray<ADroppedInventoryItemPickup*> AttachedLoot;
    
    UPROPERTY(Transient)
    ULootableBalanceData* LootableBalanceDataOverride;
    
    UPROPERTY(Transient)
    AActor* BalanceContextOverride;
    
public:
    ULootableComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnAndDropLoot(FName& SelectedConfigurationName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnAndAttachLoot(FName& SelectedConfigurationName);
    
    UFUNCTION(BlueprintCallable)
    void SetBalanceContextOverride(AActor* NewOverrideContext, bool bOnlyUseForGameStage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void InitializeLootConfigurations(ULootableBalanceData* LootableBalanceData);
    
    UFUNCTION(BlueprintCallable)
    TArray<ADroppedInventoryItemPickup*> GetAttachedPickups();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivateAttachedLoot();
    
};

