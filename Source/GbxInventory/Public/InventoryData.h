#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "InventorySerialNumberAssetInterface.h"
#include "AttributeEffectData.h"
#include "InstigatorAttributeEffectData.h"
#include "UIStatPriorityData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPlayerDroppability.h"
#include "AttributeInitializationData.h"
#include "UObject/NoExportTypes.h"
#include "InventoryData.generated.h"

class UInventoryNamePartData;
class UInventoryNamingStrategyData;
class UInventoryAspectData;
class AActor;
class UGbxCondition;
class UWwiseEvent;
class UDialogEvent;
class UImpactData;
class AInventoryItemPickup;
class UInventoryCategoryData;
class UObject;

UCLASS(BlueprintType)
class GBXINVENTORY_API UInventoryData : public UGbxDataAsset, public IInventorySerialNumberAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    uint8 bInventoryNameIsFullName: 1;
    
    UPROPERTY(EditInstanceOnly)
    FText InventoryName;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UInventoryNamePartData*> PrefixPartList;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UInventoryNamePartData*> TitlePartList;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UInventoryNamePartData*> SuffixPartList;
    
    UPROPERTY(EditAnywhere)
    UInventoryNamingStrategyData* NamingStrategy;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> InventoryActorClass;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FAttributeEffectData> InventoryAttributeEffects;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FInstigatorAttributeEffectData> InstigatorAttributeEffects;
    
    UPROPERTY(EditInstanceOnly, Export)
    TArray<UInventoryAspectData*> AspectList;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UInventoryAspectData*> StandaloneAspectList;
    
    UPROPERTY(EditInstanceOnly)
    bool bDisplayNameInInteractionHeader;
    
public:
    UPROPERTY(EditAnywhere)
    bool bUsesItemCard;
    
    UPROPERTY(EditAnywhere)
    FString ItemCardTypeFrameName;
    
    UPROPERTY(EditInstanceOnly, Export)
    TArray<UGbxCondition*> OnUseConstraints;
    
    UPROPERTY(EditAnywhere)
    bool bUsesPlayerLevelRequirement;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FUIStatPriorityData> UIStats;
    
    UPROPERTY()
    FGuid AssetGuid;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* PickupSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* PickupEquipSound;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* SpottedCalloutCondition;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* SpottedCallout;
    
    UPROPERTY(EditAnywhere)
    UImpactData* PickupImpact;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* EquipUISound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DropUISound;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AInventoryItemPickup> InventoryItemPickupClass;
    
    UPROPERTY(EditAnywhere)
    bool bReplicateActorInPickup;
    
    UPROPERTY(EditAnywhere)
    bool bSharedByPickups;
    
    UPROPERTY(EditAnywhere)
    bool bMustMatchGameStageToShare;
    
    UPROPERTY(EditAnywhere)
    FName PickupFlyToTarget;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> PickupHiddenBones;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideRotationInShop;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationInShop;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideTranslationInShop;
    
    UPROPERTY(EditAnywhere)
    FVector TranslationInShop;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideScaleInShop;
    
    UPROPERTY(EditAnywhere)
    FVector ScaleInShop;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideRotationInContainer;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationInContainer;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanBeHolsteredOnBody: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanShowHolsteredInFirstPerson: 1;
    
    UPROPERTY(EditAnywhere)
    FName DefaultHolsterSocketName;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* InventoryCategory;
    
    UPROPERTY(EditAnywhere)
    EPlayerDroppability PlayerDroppability;
    
    UPROPERTY(EditAnywhere)
    uint8 SizeInInventory;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MonetaryValue;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreShopPriceMarkup;
    
    UPROPERTY(EditAnywhere)
    bool bCalculatePriceInShopUsingPlayerAsContext;
    
    UPROPERTY(EditAnywhere)
    float BaseMonetaryValueModifier;
    
    UPROPERTY(EditAnywhere)
    bool bUsesInventoryScore;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UObject* AssociatedCustomizationData;
    
    UPROPERTY(EditAnywhere)
    FTransform ThumbnailTransform;
    
    UPROPERTY(EditAnywhere)
    FTransform ItemInspectInitialTransform;
    
    UPROPERTY(EditAnywhere)
    FTransform ItemInspectInitialTransform_Vertical;
    
    UPROPERTY(EditAnywhere)
    FTransform ItemInspectInitialTransform_4way;
    
    UInventoryData();
    UFUNCTION()
    void EnumeratePickupFlyToTargets(TArray<FName>& Targets) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

