#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxMenuInputEvent.h"
#include "GbxGFxDropDownList.generated.h"

class UGbxGFxSlider;
class UGbxTextField;
class UGbxGFxButton;
class UGbxGFxComboBoxScrollingList;

UCLASS(NonTransient)
class GBXUI_API UGbxGFxDropDownList : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxTextField* CurrentSelectionText;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* ListScrollBar;
    
    UPROPERTY(Transient)
    UGbxGFxButton* DropDownButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* TopButton;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DropDownListContainer;
    
    UPROPERTY(Transient)
    UGbxGFxComboBoxScrollingList* DropDownList;
    
private:
    UPROPERTY(Transient)
    TArray<FText> EntriesList;
    
    UPROPERTY(Transient)
    FText CurrentlySelectedEntry;
    
public:
    UGbxGFxDropDownList();
private:
    UFUNCTION()
    void OnEntryClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnDropDownButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
};

