#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObjectOwnedGFxMenu.h"
#include "EBaseQuickChangeMenuState.h"
#include "BaseQuickChangeMenuStateData.h"
#include "UObject/NoExportTypes.h"
#include "StandInUIController.h"
#include "EchoDeviceUIController.h"
#include "EGbxGFxButtonType.h"
#include "GbxMenuInputEvent.h"
#include "EBaseQuickChangeChoiceType.h"
#include "GFxQuickChangeMenuBase.generated.h"

class UGbxGFxListCell;
class UGFxBaseQuickChangeMenuItem;
class UGbxGFxObject;
class UGbxTextField;
class UGbxGFxGridScrollingList;
class UGbxCustomizationData;
class UGbxGFxMouseCapturePanel;
class UOakCustomizationData;
class UGbxGFxButton;

UCLASS(Blueprintable)
class OAKGAME_API UGFxQuickChangeMenuBase : public UAdvancedInteractiveObjectOwnedGFxMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* MainContent;
    
    UPROPERTY(Transient)
    UGbxTextField* TopperText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* EmoteWheel;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* MenuList;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* SelectionList;
    
    UPROPERTY(EditAnywhere)
    TMap<EBaseQuickChangeMenuState, FBaseQuickChangeMenuStateData> StateDataMap;
    
    UPROPERTY(Transient)
    TArray<UGbxCustomizationData*> UnlockedCustomizationsDataArray;
    
    UPROPERTY(Transient)
    TArray<UGbxCustomizationData*> LockedCustomizationsDataArray;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceMenuName;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceIdleScreenName;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceMenuName_EchoSkin;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceIdleScreenName_EchoSkin;
    
    UPROPERTY(EditAnywhere)
    TArray<FColor> ColorizationDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    FStandInUIController StandInController;
    
    UPROPERTY(EditDefaultsOnly)
    FEchoDeviceUIController EchoDeviceController;
    
    UPROPERTY(EditDefaultsOnly)
    FName ProjectionFXWidgetName;
    
    UPROPERTY(Transient)
    TArray<UGFxBaseQuickChangeMenuItem*> EmoteLoadoutButtons;
    
    UPROPERTY(Transient)
    UGbxGFxMouseCapturePanel* MouseCapturePanel;
    
    UPROPERTY(Transient)
    UGbxTextField* EquippedEmoteLabel;
    
    UPROPERTY(Transient)
    UOakCustomizationData* EmoteToSlot;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CounterWrapper;
    
    UPROPERTY(Transient)
    UGbxTextField* CounterText;
    
    UPROPERTY(Transient)
    EGbxGFxButtonType CustomizationButtonType;
    
    UPROPERTY(EditAnywhere)
    float MaxRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float MouseMaxRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxSecondsToReachTargetSpeed;
    
    UPROPERTY(Transient)
    UGbxCustomizationData* PendingStandInCustomization;
    
public:
    UGFxQuickChangeMenuBase();
protected:
    UFUNCTION()
    void OnSelectionListSelectionChanged(UGbxGFxListCell* SelectedItem) const;
    
    UFUNCTION()
    void OnSelectionListItemClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo) const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnQuickChangeChoiceMade(EBaseQuickChangeChoiceType ChoiceType) const;
    
protected:
    UFUNCTION()
    void OnMenuListItemClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnEmoteLoadoutButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
};

