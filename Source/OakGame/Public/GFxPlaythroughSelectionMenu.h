#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "PlaythroughSelectionModeEntry.h"
#include "GFxFrontendTargetMenuInterface.h"
#include "GbxMenuInputEvent.h"
#include "GFxPlaythroughSelectionMenu.generated.h"

class UGbxMenuData;
class UGbxGFxObject;
class UGbxTextField;
class UGbxGFxHintWidget;
class UGbxGFxGridScrollingList;
class UObject;
class UGbxGFxDialogBox;
class UGbxGFxButton;

UCLASS(Config=Game)
class UGFxPlaythroughSelectionMenu : public UGbxGFxMenu, public IGFxFrontendTargetMenuInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FPlaythroughSelectionModeEntry> ModeEntries;
    
    UPROPERTY(EditAnywhere)
    FText MenuTitleString;
    
    UPROPERTY(EditAnywhere)
    FText ToolTipTitleString;
    
    UPROPERTY(EditAnywhere)
    FText ToolTipDescriptionString;
    
    UPROPERTY(EditAnywhere)
    FText AcceptString;
    
    UPROPERTY(EditAnywhere)
    FText CancelString;
    
    UPROPERTY(EditAnywhere)
    FText ResetProgressString;
    
    UPROPERTY(EditAnywhere)
    FText ResetProgressDialogHeader;
    
    UPROPERTY(EditAnywhere)
    FText ResetProgressDialogBody;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> MainMenuMenuData;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SelectionContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ToolTipPane;
    
    UPROPERTY(Transient)
    UGbxTextField* TitleText;
    
    UPROPERTY(Transient)
    UGbxTextField* ModeDescriptionText;
    
    UPROPERTY(Transient)
    UGbxTextField* ModeTitleText;
    
    UPROPERTY(Transient)
    UGbxTextField* ToolTipTitleText;
    
    UPROPERTY(Transient)
    UGbxTextField* ToolTipDescText;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* AcceptHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ResetProgressHint;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ModesList;
    
    UPROPERTY(Transient)
    UObject* FocusedObjectBeforeLobbyWidget;
    
    UPROPERTY(Transient)
    int32 CachedPlaythroughNum;
    
public:
    UGFxPlaythroughSelectionMenu();
private:
    UFUNCTION()
    void OnResetProgressChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPlaythroughModeCellFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPlaythroughModeCellClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void extOnUITransitionCompleted() const;
    
    UFUNCTION()
    void extOnMenuHid() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

