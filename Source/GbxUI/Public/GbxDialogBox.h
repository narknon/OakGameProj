#pragma once
#include "CoreMinimal.h"
#include "GbxDialogBoxInfo.h"
#include "GbxUmgMenu.h"
#include "GbxDialogBox.generated.h"

class UGbxScrollBoxList;
class UGbxListItem;

UCLASS(EditInlineNew)
class GBXUI_API UGbxDialogBox : public UGbxUmgMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bWantsToDismiss;
    
    UPROPERTY(Transient)
    FText HeaderText;
    
    UPROPERTY(Transient)
    FText BodyText;
    
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxScrollBoxList* ChoiceList;
    
    UGbxDialogBox();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateText(const FText& NewHeaderText, const FText& NewBodyText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupDialog(const FGbxDialogBoxInfo& DialogBoxInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetHeaderTextFormatArg(const FString& ArgName, const FText& ReplacementText);
    
    UFUNCTION(BlueprintCallable)
    void SetHeaderText(const FText& NewText, bool bClearFormatArgs);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyTextFormatArg(const FString& ArgName, const FText& ReplacementText);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyText(const FText& NewText, bool bClearFormatArgs);
    
private:
    UFUNCTION()
    void OnChoiceClicked(UGbxListItem* ClickedItem);
    
public:
    UFUNCTION(BlueprintCallable)
    void Dismiss();
    
};

