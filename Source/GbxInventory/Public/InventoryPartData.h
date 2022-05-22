#pragma once
#include "CoreMinimal.h"
#include "InstigatorAttributeEffectData.h"
#include "ActorPartData.h"
#include "InventorySerialNumberAssetInterface.h"
#include "AttributeEffectData.h"
#include "AttributeInitializationData.h"
#include "UIStatPriorityData.h"
#include "UObject/NoExportTypes.h"
#include "InventoryPartData.generated.h"

class UUIStatData_Text;
class UInventoryNamePartData;
class UInventoryAspectData;

UCLASS(Abstract)
class GBXINVENTORY_API UInventoryPartData : public UActorPartData, public IInventorySerialNumberAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    FAttributeInitializationData MonetaryValueModifier;
    
    UPROPERTY(EditInstanceOnly)
    FAttributeInitializationData InventoryScoreModifier;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UInventoryNamePartData*> PrefixPartList;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UInventoryNamePartData*> TitlePartList;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UInventoryNamePartData*> SuffixPartList;
    
    UPROPERTY(EditInstanceOnly)
    FName InventoryNamingTag;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FAttributeEffectData> InventoryAttributeEffects;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FInstigatorAttributeEffectData> InstigatorAttributeEffects;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FUIStatPriorityData> UIStats;
    
    UPROPERTY(EditInstanceOnly)
    bool bAvailableForPartInspection;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UUIStatData_Text*> PartInspectionTitleOverride;
    
    UPROPERTY(EditInstanceOnly)
    UUIStatData_Text* PartInspectionDescription;
    
    UPROPERTY(EditInstanceOnly)
    bool bHideStatsForPartInspection;
    
    UPROPERTY(EditInstanceOnly, Export)
    TArray<UInventoryAspectData*> AspectList;
    
    UPROPERTY(EditAnywhere)
    FString GearBuilderDescription;
    
    UPROPERTY(EditAnywhere)
    bool bShouldIgnorePartBoundsForPickupAttachment;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FName> ExcludedGestaltMeshPartNamesForItemInspectionAndThumbnailBounds;
    
    UPROPERTY()
    FGuid AssetGuid;
    
public:
    UInventoryPartData();
    UFUNCTION(BlueprintPure)
    FAttributeInitializationData GetMonetaryValueModifier() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

