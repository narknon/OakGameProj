#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GFxStatusMenuSubmenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxSkillScreenSkillInfo.h"
#include "GbxDragDropContainerInterface.h"
#include "GFxSkillScreenBranchContainer.h"
#include "GFxSkillScreenInfoCardContainer.h"
#include "GFxMenuTutorialCollection.h"
#include "UObject/NoExportTypes.h"
#include "EGFxSkillScreenState.h"
#include "GFxSkillScreenTree.generated.h"

class UOakPlayerAbilityTree;
class UOakPlayerAbilityTreeData;
class UGbxGFxObject;
class UOakPlayerAbilityTreeBranchData;
class UGbxGFxButton;
class UGbxGFxHintWidget;
class UGFxSkillScreenDragObject;
class UGFxTutorialWidget;
class UPlayerCharacterComponentSlotData;
class USwfMovie;
class UGFxSkillScreenItem;
class UGFxSkillScreenLoadoutSlot;
class UBalanceStateComponent;
class UOakActionAbility;
class UGbxGFxDragDropManager;
class UGFxSkillScreenBranch;
class UOakPlayerAbilitySlotData;
class UOakPlayerAbilityTreeItemData;
class UOakActionAbilityAugmentSlotData;

UCLASS()
class OAKGAME_API UGFxSkillScreenTree : public UGFxStatusMenuSubmenu, public IGbxDragDropContainerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FGFxSkillScreenBranchContainer> SkillScreenTreeBranchContainers;
    
    UPROPERTY(Export, Transient)
    UOakPlayerAbilityTree* PlayerAbilityTree;
    
    UPROPERTY(Transient)
    UOakPlayerAbilityTreeData* PlayerAbilityData;
    
    UPROPERTY(EditAnywhere)
    FGFxSkillScreenInfoCardContainer InfoCard;
    
    UPROPERTY(EditAnywhere)
    FGFxSkillScreenSkillInfo ClassAbilityInfo;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceScreen_Unlocked;
    
    UPROPERTY(EditAnywhere)
    int32 TreeUnlockLevel;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AudioSkillPoints;
    
    UPROPERTY(EditAnywhere)
    FName AudioSkillMax;
    
    UPROPERTY(EditAnywhere)
    FName AudioNewRowUnlocked;
    
    UPROPERTY(EditAnywhere)
    FName AudioSpinTree;
    
    UPROPERTY(EditAnywhere)
    FName AudioEquipSkill;
    
    UPROPERTY(EditAnywhere)
    FName AudioTreeUnlock;
    
    UPROPERTY(EditAnywhere)
    FName VOTreeUnlock;
    
    UPROPERTY(EditAnywhere)
    float TreeUnlockDelayForVO;
    
    UPROPERTY(EditAnywhere)
    FName AudioToggleView;
    
    UPROPERTY(EditAnywhere)
    FName AudioUnequipSkill;
    
    UPROPERTY(EditAnywhere)
    FName AudioErrorNotification;
    
    UPROPERTY(EditAnywhere)
    FName AudioManageLoadout;
    
    UPROPERTY(EditAnywhere)
    FGFxMenuTutorialCollection Tutorials;
    
    UPROPERTY(EditAnywhere)
    FName PurchasePassiveTutorial;
    
    UPROPERTY(EditAnywhere)
    FName WingtipTutorial;
    
    UPROPERTY(EditAnywhere)
    int32 TreeUnlockFirstSpinIndex;
    
    UPROPERTY(EditAnywhere)
    int32 TreeUnlockSecondSpinIndex;
    
    UPROPERTY(EditAnywhere)
    int32 TreeUnlockSlotPrimaryIndex;
    
    UPROPERTY(EditAnywhere)
    int32 TreeUnlockSlotPetIndex;
    
    UPROPERTY(EditAnywhere)
    int32 TreeUnlockSlotSecondaryHardpointIndex;
    
    UPROPERTY(EditAnywhere)
    int32 PurchasePassiveSpendPointIndex;
    
    UPROPERTY(Transient)
    FName CharacterSpecificFirstUnlockTutorial;
    
    UPROPERTY(EditAnywhere)
    FLinearColor IconBackgroundSelectedColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor IconBackgroundAvailableColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor IconBackgroundLockedColor;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SkillTreeContainer;
    
    UPROPERTY(Transient)
    TArray<UOakPlayerAbilityTreeBranchData*> CachedBranches;
    
    UPROPERTY(Transient)
    UGbxGFxButton* LeftArrow;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* LeftArrowHint;
    
    UPROPERTY(Transient)
    UGbxGFxButton* RightArrow;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* RightArrowHint;
    
    UPROPERTY(Transient)
    UGFxSkillScreenDragObject* DragSkillItem;
    
    UPROPERTY(Transient)
    UGFxTutorialWidget* TutorialWidget;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* BranchSwfMovie;
    
    UPROPERTY(Transient)
    UGFxSkillScreenItem* CurrentlyFocusedSkillItem;
    
    UPROPERTY(Transient)
    UGFxSkillScreenItem* CachedDragTarget;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* CurrentlyFocusedLoadoutSlot;
    
    UPROPERTY(Export, Transient)
    UBalanceStateComponent* CharacterBalanceComponent;
    
    UPROPERTY(Transient)
    EGFxSkillScreenState ScreenState;
    
    UPROPERTY(Transient)
    EGFxSkillScreenState TransitionScreenState;
    
    UPROPERTY(Transient)
    TArray<UOakActionAbility*> ActionAbilities;
    
    UPROPERTY(Transient)
    TArray<UGFxSkillScreenLoadoutSlot*> SlotsToAutoSlot;
    
    UPROPERTY(Transient)
    TArray<UGFxSkillScreenLoadoutSlot*> LoadoutSlots;
    
    UPROPERTY(Transient)
    TArray<UGFxSkillScreenLoadoutSlot*> ValidLoadoutSlotsForSelectedItem;
    
    UPROPERTY(Transient)
    TArray<UGFxSkillScreenLoadoutSlot*> DragTargetSlots;
    
    UPROPERTY(EditAnywhere)
    FText EmptySlotText;
    
    UPROPERTY(EditAnywhere)
    FText TreeUnlockedAbility;
    
    UPROPERTY(EditAnywhere)
    FText TreeUnlockedText;
    
    UPROPERTY(EditAnywhere)
    FText ActionSkillName;
    
    UPROPERTY(EditAnywhere)
    FText ActionSkillDescription;
    
    UPROPERTY(EditAnywhere)
    FText ModPrimaryName;
    
    UPROPERTY(EditAnywhere)
    FText ModPrimaryDescription;
    
    UPROPERTY(EditAnywhere)
    FText ModSecondaryName;
    
    UPROPERTY(EditAnywhere)
    FText ModSecondaryDescription;
    
    UPROPERTY(EditAnywhere)
    FText PassiveSlotName;
    
    UPROPERTY(EditAnywhere)
    FText EqippedName;
    
    UPROPERTY(EditAnywhere)
    FText UnlocksAtLevelText;
    
    UPROPERTY(EditAnywhere)
    FText AbilityInUseString;
    
    UPROPERTY(EditAnywhere)
    FText SlotMustBeFilledString;
    
    UPROPERTY(EditAnywhere)
    FText InfoCardEquippedString;
    
    UPROPERTY(EditAnywhere)
    FText InfoCardMustBeEquippedString;
    
    UPROPERTY(EditAnywhere)
    FText InfoCardEquipAnItemString;
    
    UPROPERTY(EditAnywhere)
    FText InfoCardDefaultSlottedItemString;
    
    UPROPERTY(EditAnywhere)
    FText InfoCardRequiresParentSkillString;
    
    UPROPERTY(EditAnywhere)
    FText InfoCardNotEnoughBranchPointsString;
    
    UPROPERTY(EditAnywhere)
    FText InfoCardUnlockTreeString;
    
    UPROPERTY(EditAnywhere)
    FText InfoCardUnpurchasedPassiveString;
    
    UPROPERTY(EditAnywhere)
    FText InfoCardPurchasedPassiveString;
    
    UPROPERTY(EditAnywhere)
    FText InfoCardMaxedPassiveString;
    
    UPROPERTY(EditAnywhere)
    FText InfoCardInsufficientPointsString;
    
    UPROPERTY()
    UGbxGFxDragDropManager* DragDropManager;
    
public:
    UGFxSkillScreenTree();
protected:
    UFUNCTION()
    void OnTutorialComplete() const;
    
    UFUNCTION()
    void OnTutorialAdvanced() const;
    
    UFUNCTION()
    void OnTreeItemPressed(UGFxSkillScreenItem* PressedItem) const;
    
    UFUNCTION()
    void OnSpinButtonPressed(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnSlotButtonHovered(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnSlotButtonFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnSlotButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnItemUsableStateChanged(UGFxSkillScreenItem* UpdatedItem) const;
    
    UFUNCTION()
    void OnItemUnlockedAudioRequest() const;
    
    UFUNCTION()
    void OnItemSlotRequest(UGFxSkillScreenItem* ItemToSlot, int32 SlotIndex) const;
    
    UFUNCTION()
    void OnItemIncreasedAudioRequest(int32 AudioIndex) const;
    
    UFUNCTION()
    void OnInfoCardUnhovered(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnInfoCardHovered(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnFocusedTreeItemChanged(UGFxSkillScreenItem* FocusedItem) const;
    
    UFUNCTION()
    void OnFocusedLoadoutItemChanged(UGFxSkillScreenLoadoutSlot* FocusedItem) const;
    
    UFUNCTION()
    void OnCharacterAugmentChanged(UPlayerCharacterComponentSlotData* SlotData) const;
    
    UFUNCTION()
    void OnBranchHovered(UGbxGFxButton* HoverededButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBranchClicked(UGFxSkillScreenBranch* ClickedBranch) const;
    
    UFUNCTION()
    void OnAbilitySlotChanged(UOakPlayerAbilitySlotData* SlotData) const;
    
    UFUNCTION()
    void OnAbilityPointsChanged(int32 RemainingAbilityPoints) const;
    
    UFUNCTION()
    void OnAbilityItemChanged(UOakPlayerAbilityTreeItemData* ItemData) const;
    
    UFUNCTION()
    void OnAbilityAugmentChanged(TSubclassOf<UOakActionAbility> ActionAbilityClass, UOakActionAbilityAugmentSlotData* SlotData) const;
    
private:
    UFUNCTION()
    void extSpinRightTransition() const;
    
    UFUNCTION()
    void extSpinLeftTransition() const;
    
protected:
    UFUNCTION()
    void ExtOnTutorialSpinComplete() const;
    
    UFUNCTION()
    void ExtOnScreenUnlockAnimationComplete() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

