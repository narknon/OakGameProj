#pragma once
#include "CoreMinimal.h"
#include "GbxListItem.h"
#include "Types/SlateEnums.h"
#include "GbxListItemComboBox.generated.h"

class UComboBoxString;

UCLASS(EditInlineNew)
class GBXUI_API UGbxListItemComboBox : public UGbxListItem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FListItemComboBoxSelectionChangedDelegate, int32, NewSelectedIndex);
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UComboBoxString* ValueComboBox;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
    FListItemComboBoxSelectionChangedDelegate OnComboBoxSelectionChanged;
    
    UGbxListItemComboBox();
    UFUNCTION(BlueprintCallable)
    void SetSelectedOptionIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousOption();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextOption();
    
protected:
    UFUNCTION()
    void OnValueComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeComboBox(const TArray<FText>& Items, const int32 InitialValue);
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedOptionIndex() const;
    
};

