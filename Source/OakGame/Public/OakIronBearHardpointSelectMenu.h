#pragma once
#include "CoreMinimal.h"
#include "GbxUmgMenu.h"
#include "Types/SlateEnums.h"
#include "OakIronBearHardpointSelectMenu.generated.h"

class UComboBoxString;

UCLASS(EditInlineNew, Config=Game)
class OAKGAME_API UOakIronBearHardpointSelectMenu : public UGbxUmgMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    int32 CurrentLeftHardpointIndex;
    
    UPROPERTY(Config)
    int32 CurrentRightHardpointIndex;
    
    UPROPERTY(Config)
    int32 CurrentCoreIndex;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UComboBoxString* LeftHardpointComboBox;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UComboBoxString* RightHardpointComboBox;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UComboBoxString* CoreComboBox;
    
public:
    UOakIronBearHardpointSelectMenu();
protected:
    UFUNCTION()
    void RightHardpointSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION()
    void LeftHardpointSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION()
    void CoreSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
};

