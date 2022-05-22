#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GbxGFxDialogBoxOnChoiceMadeDelegate.h"
#include "GbxMenuInputEvent.h"
#include "GbxGFxDialogBox.generated.h"

class UGbxGFxButton;
class UGbxTextField;
class UGbxGFxObject;
class UGbxGFxEditableTextField;
class UGbxGFxGridScrollingList;

UCLASS()
class OAKGAME_API UGbxGFxDialogBox : public UGbxGFxMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxTextField* HeaderTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* BodyTextField;
    
    UPROPERTY(Transient)
    UGbxGFxEditableTextField* InputTextField;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ContentPanel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DialogBoxBackground;
    
    UPROPERTY(Transient)
    UGbxTextField* PlayerNameTextField;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ProcessingIcon;
    
    UPROPERTY(Transient)
    int32 InitialChoice;
    
public:
    UPROPERTY(Transient)
    FText HeaderText;
    
    UPROPERTY(Transient)
    FText BodyText;
    
    UPROPERTY(Transient)
    FText InputText;
    
    UPROPERTY(BlueprintReadOnly)
    FGbxGFxDialogBoxOnChoiceMade OnChoiceMadeDelegate;
    
    UGbxGFxDialogBox();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetInputTextFormatArg(const FString& ArgName, const FText& ReplacementText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetInputText(const FText& NewText, bool bClearFormatArgs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetHeaderTextFormatArg(const FString& ArgName, const FText& ReplacementText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetHeaderText(const FText& NewText, bool bClearFormatArgs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetBodyTextFormatArg(const FString& ArgName, const FText& ReplacementText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetBodyText(const FText& NewText, bool bClearFormatArgs) const;
    
private:
    UFUNCTION()
    void OnDialogBoxItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Dismiss() const;
    
};

