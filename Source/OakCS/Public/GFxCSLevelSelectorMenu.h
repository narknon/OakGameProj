#pragma once
#include "CoreMinimal.h"
#include "GFxCSSubMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxCSLevelSelectorMenu.generated.h"

class UGFxCSLevelList;
class UCSLevelData;
class UGbxGFxButton;

UCLASS()
class OAKCS_API UGFxCSLevelSelectorMenu : public UGFxCSSubMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UCSLevelData* LevelData;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforeLoadingPuzzleMenu;
    
    UPROPERTY(Transient)
    UGFxCSLevelList* LevelList;
    
public:
    UGFxCSLevelSelectorMenu();
private:
    UFUNCTION()
    void OnLevelItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
};

