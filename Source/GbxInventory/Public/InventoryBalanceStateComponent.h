#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReplicatedUIStatCollectionData.h"
#include "BalanceStateComponent.h"
#include "InventoryReplicationData.h"
#include "EDropLifeSpanType.h"
#include "GbxAttributeModifierHandle.h"
#include "InventoryPrimitiveAspectSetData.h"
#include "UObject/NoExportTypes.h"
#include "CachedUIStatCollectionData.h"
#include "InventoryBalanceStateComponent.generated.h"

class UInventoryPartData;
class UInventoryParticleAspectData;
class UManufacturerData;
class UInventoryMaterialAspectTextureAssetStreamer;
class UInventoryNamePartData;
class UInventoryData;
class UInventoryBalanceData;
class UInventoryGenericPartData;
class UInventoryCustomizationPartData;
class UInventoryAspectData;
class UGestaltData;
class UInventoryConditionalDamageAspectData;
class UInventoryAttributeEffectsAspectData;
class APawn;
class UGbxDamageType;
class UParticleSystem;
class UWwiseEvent;
class UInventoryRarityData;
class AActor;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXINVENTORY_API UInventoryBalanceStateComponent : public UBalanceStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient)
    FInventoryReplicationData PackedReplicationData;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UInventoryNamePartData*> NamePartList;
    
    UPROPERTY(Transient)
    float MonetaryValueModifierTotal;
    
    UPROPERTY(Replicated, Transient)
    int32 MonetaryValue;
    
    UPROPERTY(Transient)
    float InventoryScoreModifierTotal;
    
    UPROPERTY(Replicated, Transient)
    int32 InventoryScoreValue;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UInventoryData* InventoryData;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UInventoryBalanceData* InventoryBalanceData;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UManufacturerData* ManufacturerData;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UInventoryPartData*> PartList;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UInventoryGenericPartData*> GenericPartList;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<uint8> AdditionalData;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UInventoryCustomizationPartData*> CustomizationPartList;
    
    UPROPERTY(Replicated, Transient, VisibleAnywhere)
    uint8 ReRollCount;
    
    UPROPERTY(Transient, VisibleAnywhere)
    FText DisplayName;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UInventoryAspectData*> GenericAspects;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UGestaltData* GestaltData;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> GestaltMeshPartNames;
    
    UPROPERTY(Transient)
    TArray<FGbxAttributeModifierHandle> InstigatorAttributeModifiers;
    
    UPROPERTY(Transient)
    TArray<FInventoryPrimitiveAspectSetData> PrimitiveAspectSetList;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UInventoryConditionalDamageAspectData*> ConditionalDamageAspectList;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UInventoryAttributeEffectsAspectData*> AttributeEffectsAspectList;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UInventoryParticleAspectData*> ParticleAspects;
    
    UPROPERTY(Transient)
    FCachedUIStatCollectionData UIStats;
    
    UPROPERTY(ReplicatedUsing=OnRep_ReplicatedUIStats)
    FReplicatedUIStatCollectionData ReplicatedUIStats;
    
    UPROPERTY(Transient)
    TArray<UInventoryMaterialAspectTextureAssetStreamer*> InventoryMaterialAspectTextureAssetStreamers;
    
public:
    UInventoryBalanceStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void PostBeginPlay();
    
    UFUNCTION()
    void OnRep_ReplicatedUIStats();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyUnequipped(APawn* OldInstigator);
    
    UFUNCTION(BlueprintCallable)
    void NotifyEquipped(APawn* NewInstigator);
    
    UFUNCTION(BlueprintCallable)
    void NotifyAttached(APawn* Instigator);
    
    UFUNCTION(BlueprintNativeEvent)
    TSubclassOf<UGbxDamageType> K2_GetDamageType() const;
    
    UFUNCTION(BlueprintPure)
    bool IsManufactureredBy(const UManufacturerData* Manufacturer) const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetReRollCount() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UInventoryPartData*> GetPartList() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMonetaryValue() const;
    
    UFUNCTION(BlueprintPure)
    UManufacturerData* GetManufacturer() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetInventoryScoreValue() const;
    
    UFUNCTION(BlueprintPure)
    UParticleSystem* GetInventoryRarityLootBeamOverride() const;
    
    UFUNCTION(BlueprintPure)
    float GetInventoryRarityLootBeamHeight() const;
    
    UFUNCTION(BlueprintPure)
    UWwiseEvent* GetInventoryRarityLootAudioStinger() const;
    
    UFUNCTION(BlueprintPure)
    EDropLifeSpanType GetInventoryRarityLifeSpanType() const;
    
    UFUNCTION(BlueprintPure)
    float GetInventoryRarityLifeSpan() const;
    
    UFUNCTION(BlueprintPure)
    FString GetInventoryRarityFrameName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetInventoryRarityDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    UInventoryRarityData* GetInventoryRarityData() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetInventoryRarityColorOutline() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetInventoryRarityColorFX() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInventoryDisplayRarityOutline() const;
    
    UFUNCTION(BlueprintPure)
    UInventoryData* GetInventoryData() const;
    
    UFUNCTION(BlueprintPure)
    UInventoryBalanceData* GetInventoryBalanceData() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UInventoryGenericPartData*> GetGenericPartList() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UGbxDamageType> GetDamageType() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UInventoryCustomizationPartData*> GetCustomizationPartList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CloneAppearance(AActor* DestActor, USceneComponent* ParentComp, bool bAbsoluteScale) const;
    
};

