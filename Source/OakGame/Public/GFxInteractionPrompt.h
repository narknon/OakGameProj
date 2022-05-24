#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "UObject/NoExportTypes.h"
#include "UsabilityInfo.h"
#include "EPromptLinesLayouts.h"
#include "UObject/NoExportTypes.h"
#include "InventoryListEntryHandle.h"
#include "GFxInteractionPrompt.generated.h"

class UGbxGFxHintWidget;
class UGbxTextField;
class UGbxGFxObject;
class UUseComponent;
class UUsableComponent;
class UInventoryListComponent;
class AController;
class UPrimitiveComponent;
class UInventoryCategoryData;

UCLASS()
class OAKGAME_API UGFxInteractionPrompt : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxHintWidget* HintWidgetPrimary;
    
    UPROPERTY()
    UGbxTextField* InteractionLabelPrimary;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ModeIconsPrimary;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* HintWidgetSecondary;
    
    UPROPERTY()
    UGbxTextField* InteractionLabelSecondary;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ModeIconsSecondary;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D DefaultGlyphSize;
    
protected:
    UPROPERTY(Export, Transient)
    UUseComponent* UseComponent;
    
    UPROPERTY(Export, Transient)
    UUsableComponent* CachedUsableComponent;
    
    UPROPERTY(Transient)
    FUsabilityInfo CachedUsabilityInfo;
    
    UPROPERTY(Export, Transient)
    UInventoryListComponent* CachedInventoryList;
    
    UPROPERTY(Transient)
    EPromptLinesLayouts LinesLayout;
    
public:
    UGFxInteractionPrompt();
private:
    UFUNCTION()
    void UpdateUsabilityTextColor() const;
    
    UFUNCTION()
    void OnUsedSecondaryHold(AController* UserController, UPrimitiveComponent* UsedComponent) const;
    
    UFUNCTION()
    void OnUsedSecondary(AController* UserController, UPrimitiveComponent* UsedComponent) const;
    
    UFUNCTION()
    void OnUsedPrimaryHold(AController* UserController, UPrimitiveComponent* UsedComponent) const;
    
    UFUNCTION()
    void OnUsedPrimary(AController* UserController, UPrimitiveComponent* UsedComponent) const;
    
    UFUNCTION()
    void OnUsabilityChanged(UUsableComponent* NewUsableComponent, const FUsabilityInfo& InUsabilityInfo) const;
    
    UFUNCTION()
    void OnRevivingStop(bool IsHealed) const;
    
    UFUNCTION()
    void OnRevivingStart() const;
    
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
    UFUNCTION()
    void OnHoldUseStopped() const;
    
    UFUNCTION()
    void OnCurrentUsableChanged(UUsableComponent* NewUsableComponent, const FUsabilityInfo& InUsabilityInfo, FVector NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway) const;
    
    UFUNCTION()
    void OnCurrencyQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const;
    
};

