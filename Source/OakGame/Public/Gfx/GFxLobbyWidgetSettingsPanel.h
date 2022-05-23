#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxFocusableWidget.h"
#include "EGbxFocusableWidgetState.h"
#include "GFxLobbyWidgetSettingsPanel.generated.h"

class UPrivacySettingList;
class UGFxPrivacySettingWidget;
class ULootModeSettingList;
class UGFxLootModeSettingWidget;
class UGbxTextField;
class UGbxWidgetFocusManager;
class UObject;
class UGFxLobbyWidget;

UCLASS(NonTransient)
class UGFxLobbyWidgetSettingsPanel : public UGbxGFxObject, public IGbxFocusableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxPrivacySettingWidget* PrivacySettingWidget;
    
    UPROPERTY(Transient)
    UGFxLootModeSettingWidget* LootModeSettingWidget;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PrivacySettingPanel;
    
    UPROPERTY(Transient)
    UPrivacySettingList* PrivacySettingList;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LootModeSettingPanel;
    
    UPROPERTY(Transient)
    ULootModeSettingList* LootModeSettingList;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ToolTipWrapperClip;
    
    UPROPERTY(Transient)
    UGbxTextField* ToolTipClip;
    
    UPROPERTY(Transient)
    UGbxWidgetFocusManager* FocusManager;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> LastHoveredWidget;
    
    UPROPERTY(Transient)
    UGFxLobbyWidget* OwningLobbyWidget;
    
public:
    UGFxLobbyWidgetSettingsPanel();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetFocusableWidgetEnabled(bool bEnabled) override PURE_VIRTUAL(SetFocusableWidgetEnabled,);
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusableWidgetFocused() const override PURE_VIRTUAL(IsFocusableWidgetFocused, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusableWidgetEnabled() const override PURE_VIRTUAL(IsFocusableWidgetEnabled, return false;);
    
    UFUNCTION(BlueprintCallable)
    EGbxFocusableWidgetState GetFocusableWidgetState() const override PURE_VIRTUAL(GetFocusableWidgetState, return EGbxFocusableWidgetState::Unknown;);
    
};

