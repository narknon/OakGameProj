#pragma once
#include "CoreMinimal.h"
#include "GFxQuickChangeMenuBase.h"
#include "GbxMenuInputEvent.h"
#include "UObject/NoExportTypes.h"
#include "GFxQuickChangeMenu.generated.h"

class UGbxTextField;
class UGbxGFxObject;
class UGFxColorPickerWidget;
class UGbxGFxEditableTextField;
class UGFxQuickChangeRespecTreeBranch;
class UGbxGFxDialogBox;
class UGbxGFxListCell;
class UGbxGFxButton;

UCLASS()
class OAKGAME_API UGFxQuickChangeMenu : public UGFxQuickChangeMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float RespecAnimTime;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RenameSaveGameContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* RenameCharacterLabel;
    
    UPROPERTY(Transient)
    UGbxGFxEditableTextField* RenameCharacterField;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RenamePetContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* RenamePetLabel;
    
    UPROPERTY(Transient)
    UGbxGFxEditableTextField* RenamePetField;
    
    UPROPERTY(Transient)
    UGFxColorPickerWidget* ColorPicker;
    
    UPROPERTY(Transient)
    TArray<UGFxQuickChangeRespecTreeBranch*> RespecTreeBranches;
    
public:
    UGFxQuickChangeMenu();
private:
    UFUNCTION()
    void OnSaveGameRenamed(UGbxGFxEditableTextField* SaveGameField, const FString& NewName) const;
    
    UFUNCTION()
    void OnSaveGameRenameAborted(UGbxGFxEditableTextField* SaveGameField, const FString& NewName) const;
    
    UFUNCTION()
    void OnRespecChoiceMade(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPetRenamed(UGbxGFxEditableTextField* SaveGameField, const FString& NewName) const;
    
    UFUNCTION()
    void OnPetRenameAborted(UGbxGFxEditableTextField* SaveGameField, const FString& NewName) const;
    
protected:
    UFUNCTION()
    void OnMenuListItemSelectionChanged(UGbxGFxListCell* SelectedItem) const;
    
private:
    UFUNCTION()
    void OnEmoteLoadoutButtonFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnColorSelected(FColor NewColor, bool bIsSplit, int32 Index, bool bIsDefault) const;
    
    UFUNCTION()
    void OnColorFocused(FColor NewColor, bool bIsSplit, int32 Index, bool bIsDefault) const;
    
};

