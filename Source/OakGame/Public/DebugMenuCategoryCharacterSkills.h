#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDebugMenuSubmenu.h"
#include "DebugMenuGradebox.h"
#include "DebugMenuCategoryCharacterSkills.generated.h"

class UOakAbilityDebugMenuCascadingList;
class UTextBlock;
class UCanvasPanel;
class AOakCharacter_Player;
class UPlayerCharacterComponent;
class UOakPlayerAbilityManagerComponent;
class UOakPlayerAbilityTree;
class UPlayerBalanceStateComponent;
class UOakPlayerAbilityTreeItemData_Ability;
class UOakPlayerAbilityTreeItemData_ActionAbilityAugment;
class UOakPlayerAbilitySlotData;
class UGbxListItemText_CharacterDebugMenu;
class UOakActionAbility;
class UOakActionAbilityAugmentSlotData;
class UOakPlayerAbilityTreeItemData;

UCLASS(EditInlineNew)
class UDebugMenuCategoryCharacterSkills : public UGbxDebugMenuSubmenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UOakAbilityDebugMenuCascadingList* CascadingListRef;
    
    UPROPERTY(Export, Transient)
    UTextBlock* CharacterNameRef;
    
    UPROPERTY(Export, Transient)
    UCanvasPanel* DescriptionPanelRef;
    
    UPROPERTY(Export, Transient)
    UTextBlock* DescriptionRef;
    
    UPROPERTY(Transient)
    FDebugMenuGradebox Grade1Details;
    
    UPROPERTY(Transient)
    AOakCharacter_Player* PrimaryPlayer;
    
    UPROPERTY(Export, Transient)
    UOakPlayerAbilityManagerComponent* PrimaryPlayerAbilityManager;
    
    UPROPERTY(Export, Transient)
    UPlayerCharacterComponent* PrimaryPlayerCharacterCompoment;
    
    UPROPERTY(Export, Transient)
    UOakPlayerAbilityTree* PlayerAbilityTree;
    
    UPROPERTY(Export, Transient)
    UPlayerBalanceStateComponent* BalanceState;
    
    UPROPERTY(Transient)
    TArray<UOakPlayerAbilityTreeItemData_Ability*> AbilitiesSorted;
    
    UPROPERTY(Transient)
    TArray<UOakPlayerAbilityTreeItemData_ActionAbilityAugment*> AugmentsSorted;
    
public:
    UDebugMenuCategoryCharacterSkills();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectionMade();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectionFailed();
    
private:
    UFUNCTION()
    void OnPlayerAbilitySlotChanged(UOakPlayerAbilitySlotData* SlotData);
    
    UFUNCTION()
    void OnLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel);
    
    UFUNCTION()
    void OnCascadeListItemSelected(UGbxListItemText_CharacterDebugMenu* ListItem);
    
    UFUNCTION()
    void OnCascadeListItemRefresh(UGbxListItemText_CharacterDebugMenu* ListItem);
    
    UFUNCTION()
    void OnCascadeListItemClicked(UGbxListItemText_CharacterDebugMenu* ListItem);
    
    UFUNCTION()
    void OnActionAbilityAugmentChanged(TSubclassOf<UOakActionAbility> ActionAbilityClass, UOakActionAbilityAugmentSlotData* SlotData);
    
    UFUNCTION()
    void OnAbilityTreeReset();
    
    UFUNCTION()
    void OnAbilityPointsChanged(int32 RemainingAbilityPoints);
    
    UFUNCTION()
    void OnAbilityItemChanged(UOakPlayerAbilityTreeItemData* ItemData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ConstructCharacterPage();
    
};

