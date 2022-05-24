#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDebugMenuSubmenu.h"
#include "AvailableAmmoType.h"
#include "AvailableManufacturer.h"
#include "AvailableInventoryBalanceData.h"
#include "AvailablePartData.h"
#include "Types/SlateEnums.h"
#include "GbxMenuInputEvent.h"
#include "OakDebugWeaponBuilderMenu.generated.h"

class UBUTTON;
class USpinBox;
class UTextBlock;
class UGbxScrollBoxList;
class UOakDebugWeaponBuilderButton;
class UGbxUserWidget;

UCLASS(EditInlineNew, Config=Game)
class OAKGAME_API UOakDebugWeaponBuilderMenu : public UGbxDebugMenuSubmenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UBUTTON* BuildButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USpinBox* PlayerLevelGradeSpinner;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* ErrorText;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxScrollBoxList* ManufacturerList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxScrollBoxList* AmmoTypesList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxScrollBoxList* InventoryBalancesList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxScrollBoxList* PartPickerListLeft;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxScrollBoxList* PartPickerListRight;
    
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakDebugWeaponBuilderButton> OptionButtonClass;
    
    UPROPERTY()
    TArray<FAvailableManufacturer> AvailableManufacturers;
    
    UPROPERTY()
    TArray<FAvailableAmmoType> AvailableAmmoTypes;
    
    UPROPERTY()
    TArray<FAvailableInventoryBalanceData> AvailableInventoryBalances;
    
    UPROPERTY()
    TArray<FAvailablePartData> AvailableParts;
    
    UPROPERTY(Config)
    uint64 PreviouslySeletedManufacturerIndexes;
    
    UPROPERTY(Config)
    uint64 PreviouslySeletedAmmoTypes;
    
    UPROPERTY(Config)
    uint64 PreviouslySeletedBalanceDefinitions;
    
    UPROPERTY(Config)
    uint64 PreviouslySeletedPartListLeft;
    
    UPROPERTY(Config)
    uint64 PreviouslySeletedPartListRight;
    
    UPROPERTY(Export, Transient)
    UOakDebugWeaponBuilderButton* CurrentFocusedOptionButton;
    
public:
    UOakDebugWeaponBuilderMenu();
private:
    UFUNCTION()
    void OnPlayerLevelChange(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION()
    void OnPartSelectedChanged(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnOptionListItemFocused(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnManufacturerSelectedChanged(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnBuildButtonClicked();
    
    UFUNCTION()
    void OnBalanceDefSelectedChanged(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnAmmoTypeSelectedChanged(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
};

