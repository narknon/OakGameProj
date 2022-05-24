#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AdvancedInteractiveObjectProxy.h"
#include "AllTilesPhysicalStateChangedEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "OnVendingMachineScrolledDelegate.h"
#include "EPickupLootAttachmentMode.h"
#include "InventoryBoughtEventDelegate.h"
#include "EVendingMachineInteractionMode.h"
#include "EVendingMachineAnimType.h"
#include "VendingMachineItemRarityData.h"
#include "UObject/NoExportTypes.h"
#include "EVendingMachineTilesMode.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VendingMachineInteractSequence.h"
#include "VendingMachineTrayTile.h"
#include "VendingMachinePhysicalShelf.h"
#include "VendingMachineLastSelectionData.h"
#include "EVendingMachineTrayTileType.h"
#include "EVendingMachineBuyType.h"
#include "VendingMachineProxy.generated.h"

class UGFxVendingMachineMenu;
class UStaticMeshComponent;
class UGbxAction_CoordinatedEffect;
class USkeletalMeshComponent;
class UAnimSequence;
class UStaticMesh;
class UMaterialInterface;
class AVendingMachine;
class UParticleSystem;
class UWwiseEvent;
class UPhysicalMaterial;
class UPlayerShopManagerComponent;
class UInventoryShopComponent;
class UParticleSystemComponent;
class AActor;
class UWwiseAudioComponent;

UCLASS(NonTransient)
class AVendingMachineProxy : public AAdvancedInteractiveObjectProxy {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxVendingMachineMenu* VendingMachineMenu;
    
    UPROPERTY(BlueprintAssignable)
    FAllTilesPhysicalStateChangedEvent OnTilePhysicalStateDirty;
    
    UPROPERTY(Transient)
    FOnVendingMachineScrolled OnVendingMachineScrolled;
    
    UPROPERTY(Transient)
    FInventoryBoughtEvent OnInventoryBought;
    
    UPROPERTY(EditDefaultsOnly)
    EPickupLootAttachmentMode ItemAttachmentMode;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NumTrayTiles;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PrimaryTrayIndex;
    
    UPROPERTY(EditDefaultsOnly)
    int32 VisibleTrayTilesBufferSize;
    
    UPROPERTY(EditDefaultsOnly)
    int32 EndOfListPaddingSize;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinNumTilesToAllowWrapping;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinNumTiles;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHideDummyTiles;
    
    UPROPERTY(EditDefaultsOnly)
    float ScrollSkipMaxDuration;
    
    UPROPERTY(EditDefaultsOnly)
    bool bScrollSkipOverSoldOutTiles;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPickupFlyToEnabled;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforeShelfIsStablySelected;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EVendingMachineInteractionMode CurrentInteractionMode;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EVendingMachineTilesMode CurrentTilesMode;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequence* Animations[16];
    
    UPROPERTY(EditDefaultsOnly)
    int32 AnimIndexOffsets[16];
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforeHidingPurchasedItem;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforeDigistructingBackInPurchasedItem;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforePurchaseItemClunkSound;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform ShelfMeshOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* DefaultShelfMesh;
    
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* FeaturedInventoryShelfMesh;
    
    UPROPERTY(EditDefaultsOnly)
    FVector ShelfBoxExtent;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* DefaultShelfMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* DefaultFeaturedInventoryShelfMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    FName SelectedShelfMaterialParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    FName InStockShelfMaterialMaterialName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVendingMachineItemRarityData> ShelfRarityInfo;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ItemScoreEmitterTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ItemScoreParticleSortPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FName ItemScoreParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    FInt32Interval ItemScoreParameterRange;
    
    UPROPERTY(EditDefaultsOnly)
    float ItemScoreParticleScale;
    
    UPROPERTY(EditDefaultsOnly)
    FVector ItemScoreParticleTranslationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FName ItemScorePositionParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* SoldOutParticleTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SoldOutParticleSortPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator SoldOutParticleRotation;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* DefaultSelectedItemEmitterTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* CompareItemEmitterTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SelectedItemParticleSortPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FName SelectedItemParticleRarityParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator SelectedItemParticleRotation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector SelectedItemParticleTranslation;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ErrorShelfEmitterTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ErrorParticleSortPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator ErrorShelfParticleRotation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector ErrorShelfParticleTranslation;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAction_CoordinatedEffect> ItemDigistructInCE;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAction_CoordinatedEffect> ItemDigistructOutCE;
    
    UPROPERTY(EditDefaultsOnly)
    FVendingMachineInteractSequence StartInteractSequence;
    
    UPROPERTY(EditDefaultsOnly)
    FVendingMachineInteractSequence StopInteractionSequence;
    
    UPROPERTY(EditDefaultsOnly)
    UPhysicalMaterial* PrimaryPhysMat;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* ErrorSoundEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* DigistructInItemEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* EnteredItemOfTheDayRangeEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* ExitedItemOfTheDayRangeEvent;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxSellJunkDuration;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxJunkCount;
    
    UPROPERTY(Export, Transient)
    UPlayerShopManagerComponent* PlayerShopManager;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FrontPlateComponent;
    
    UPROPERTY(Transient)
    AVendingMachine* OwningVendingMachine;
    
    UPROPERTY(Export, Transient)
    UInventoryShopComponent* OwningShopComponent;
    
    UPROPERTY(Transient)
    TArray<FVendingMachineTrayTile> PurchasableTiles;
    
    UPROPERTY(Transient)
    TArray<FVendingMachineTrayTile> BuyBackTiles;
    
    UPROPERTY(Transient)
    TArray<FVendingMachineTrayTile> SellTiles;
    
    UPROPERTY(Transient)
    TArray<FVendingMachinePhysicalShelf> PhysicalShelves;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* SelectedItemParticleComponent;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* HoveredItemParticleComponent;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* ErrorSelectionParticleComponent;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* CompareItemParticleComponent;
    
    UPROPERTY(Export, Transient)
    UWwiseAudioComponent* AudioComponent;
    
    UPROPERTY(Transient)
    int32 SelectedTileIndex;
    
    UPROPERTY(Transient)
    int32 SelectedCompareItemTileIndex;
    
    UPROPERTY(Transient)
    FVendingMachineLastSelectionData LastSelectionData[3];
    
    UPROPERTY(Transient)
    EVendingMachineAnimType CurrentAnimType;
    
public:
    AVendingMachineProxy();
private:
    UFUNCTION(BlueprintCallable)
    void StopAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationPaused(bool bNewPaused);
    
public:
    UFUNCTION(BlueprintCallable)
    void ScrollUp(float ScrollDuration, bool bIsInitialPress, bool bCanThrottle);
    
    UFUNCTION(BlueprintCallable)
    void ScrollDown(float ScrollDuration, bool bIsInitialPress, bool bCanThrottle);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnStopInteractionSequenceFinished();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStartInteractionSequenceFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnSoldSomething(AActor* InventoryActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnSoldAllJunk();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnShelfStablySelected(EVendingMachineTrayTileType Type, AActor* InventoryActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnRefilledAllHealth();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnRefilledAllAmmo();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnItemDroppedToBottomOfVendingMachine();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnBoughtSomething(EVendingMachineBuyType Type, AActor* InventoryActor);
    
public:
    UFUNCTION(BlueprintPure)
    FTransform GetCurrentSocketTransform(AActor* InventoryActor, EVendingMachineTilesMode Mode, int32 SocketLocation) const;
    
};

