#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxListItem.h"
#include "GbxComboBoxChangedDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "GbxComboBoxItemInfo.h"
#include "Layout/Geometry.h"
#include "GbxMenuInputEvent.h"
#include "GbxComboBox.generated.h"

class UGbxUserWidget;
class UGbxComboBoxDropdownMenu;

UCLASS(EditInlineNew)
class GBXUI_API UGbxComboBox : public UGbxListItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxComboBoxDropdownMenu> DropdownMenuClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D DropdownMenuOffset;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FGbxComboBoxChangedDelegate OnComboChoiceChanged;
    
private:
    UPROPERTY(Transient)
    TArray<FGbxComboBoxItemInfo> ChoiceListArray;
    
    UPROPERTY(Transient)
    int32 CurrentChoiceReferenceIndex;
    
    UPROPERTY(Transient)
    FGeometry LastKnownGeometry;
    
public:
    UGbxComboBox();
    UFUNCTION()
    void OnComboBoxClicked(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION(BlueprintPure)
    int32 GetCurentChoiceReferenceIndex() const;
    
};

