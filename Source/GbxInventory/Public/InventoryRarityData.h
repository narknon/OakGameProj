#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "EDropLifeSpanType.h"
#include "InventoryRarityData.generated.h"

class UParticleSystem;
class UGameStatData;
class UWwiseEvent;

UCLASS(BlueprintType)
class GBXINVENTORY_API UInventoryRarityData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FLinearColor RarityColorFX;
    
    UPROPERTY(EditAnywhere)
    FLinearColor RarityColorOutline;
    
    UPROPERTY(EditAnywhere)
    int32 RarityOutlineDepthStencilValue;
    
    UPROPERTY(EditAnywhere)
    bool DisplayRarityOutline;
    
    UPROPERTY(EditAnywhere)
    FString RarityFrameName;
    
    UPROPERTY(EditAnywhere)
    EDropLifeSpanType RarityLifeSpanType;
    
    UPROPERTY(EditAnywhere)
    FText RarityDisplayname;
    
    UPROPERTY(EditAnywhere)
    int32 RaritySortValue;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* RarityLootBeamOverride;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* RarityLootBeamForInventoryWithFoilParts;
    
    UPROPERTY(EditAnywhere)
    float RarityLootBeamHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAttributeInitializationData ItemScoreRarityModifier;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* RarityLootAudioStinger;
    
    UPROPERTY(EditInstanceOnly)
    FAttributeInitializationData MonetaryValueModifier;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UGameStatData> OnPickedUpStat;
    
public:
    UInventoryRarityData();
    UFUNCTION(BlueprintPure)
    int32 GetRaritySortValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRarityOutlineDepthStencilValue() const;
    
    UFUNCTION(BlueprintPure)
    UParticleSystem* GetRarityLootBeamOverride(bool bInventoryHasAFoilPart) const;
    
    UFUNCTION(BlueprintPure)
    float GetRarityLootBeamHeight() const;
    
    UFUNCTION(BlueprintPure)
    UWwiseEvent* GetRarityLootAudioStinger() const;
    
    UFUNCTION(BlueprintPure)
    EDropLifeSpanType GetRarityLifeSpanType() const;
    
    UFUNCTION(BlueprintPure)
    float GetRarityLifeSpan() const;
    
    UFUNCTION(BlueprintPure)
    FText GetRarityDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetRarityColorOutline() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetRarityColorFX() const;
    
    UFUNCTION(BlueprintPure)
    FAttributeInitializationData GetItemScoreRarityModifier() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDisplayRarityOutline() const;
    
};

