#pragma once
#include "CoreMinimal.h"
#include "GFxStatusMenuSubmenu.h"
#include "UObject/NoExportTypes.h"
#include "EGFxGuardianRankMenuState.h"
#include "GbxMenuInputEvent.h"
#include "GFxGuardianRankMenu.generated.h"

class UGbxGFxObject;
class UPlayerGuardianRankComponent;
class UGbxGFxProgressBar;
class UGbxGFxGridScrollingList;
class UGuardianRankPerkData;
class UGbxGFxGridScrollingListPaged;
class UGbxGFxButton;
class UGFxGuardianRankPerkCell;
class UGFxGuardianRankRewardStatCell;
class UGuardianRankRewardCategoryData;

UCLASS()
class OAKGAME_API UGFxGuardianRankMenu : public UGFxStatusMenuSubmenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* PerkPanel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* InfoPanel;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* InfoPanelRewardStats;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* GuardianRankBar;
    
    UPROPERTY(Transient)
    UGbxGFxButton* RedeemTokenButton;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* EnforcerStatsList;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* SurvivorStatsList;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* HunterStatsList;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingListPaged* PerkSlots;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* EnforcerPerksBar;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* SurvivorPerksBar;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* HunterPerksBar;
    
    UPROPERTY(Transient)
    UGuardianRankPerkData* CurrentFocusedRankPerk;
    
    UPROPERTY(Transient)
    UGFxGuardianRankPerkCell* CurrentFocusedRankCell;
    
    UPROPERTY(Transient)
    UGFxGuardianRankRewardStatCell* CurrentlySelectedRewardStatCell;
    
    UPROPERTY(EditAnywhere)
    FText HintSelect;
    
    UPROPERTY(EditAnywhere)
    FText HintAccept;
    
    UPROPERTY(EditAnywhere)
    FText HintCancel;
    
    UPROPERTY(EditAnywhere)
    FText HintClose;
    
    UPROPERTY(EditAnywhere)
    FText Branch1String;
    
    UPROPERTY(EditAnywhere)
    FText Branch2String;
    
    UPROPERTY(EditAnywhere)
    FText Branch3String;
    
    UPROPERTY(EditAnywhere)
    FText BonusStatsString;
    
    UPROPERTY(EditAnywhere)
    FText TokensString;
    
    UPROPERTY(EditAnywhere)
    FText RankString;
    
    UPROPERTY(EditAnywhere)
    FText PerkCostString;
    
    UPROPERTY(EditAnywhere)
    FText GuardianTokenCountString;
    
    UPROPERTY(EditAnywhere)
    FText RedeemTokenString;
    
    UPROPERTY(EditAnywhere)
    FText ChooseRewardString;
    
    UPROPERTY(EditAnywhere)
    FText PerkPanelLabelText;
    
    UPROPERTY(EditAnywhere)
    FText UnlockMenuText;
    
    UPROPERTY(EditAnywhere)
    FText MenuUnlockedTextString;
    
    UPROPERTY(EditAnywhere)
    FText MenuLockedString;
    
    UPROPERTY(EditAnywhere)
    FText MenuLockedDescription;
    
    UPROPERTY(EditAnywhere)
    FText StatImprovedString;
    
    UPROPERTY(EditAnywhere)
    FLinearColor EnforcerTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SurvivorTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor HunterTextColor;
    
    UPROPERTY(EditAnywhere)
    int32 ChunksPerPageFullScreen;
    
    UPROPERTY(EditAnywhere)
    int32 ChunksPerPageSplitScreen;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPlayerGuardianRankComponent> CachedGuardianRankComponent;
    
    UPROPERTY(Transient)
    TArray<UGuardianRankRewardCategoryData*> RewardCategories;
    
    UPROPERTY(Transient)
    EGFxGuardianRankMenuState CurrentMenuState;
    
public:
    UGFxGuardianRankMenu();
private:
    UFUNCTION()
    void OnRewardCellFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnRewardCellClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnRedeemTokenButtonFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnRedeemTokenButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPerkSlotFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void HandleGuardianTokensAdded(const int32 TokensAdded) const;
    
    UFUNCTION()
    void HandleGuardianRankPerkEnableChanged(const UGuardianRankPerkData* ChangedPerk, bool bEnabled) const;
    
    UFUNCTION()
    void HandleGuardianRankChanged(const int32 OldGuardianRank, const int32 NewGuardianRank) const;
    
    UFUNCTION()
    void HandleGuardianPerksUpdated() const;
    
    UFUNCTION()
    void HandleGuardianExperienceAdded(const int32 Amount) const;
    
    UFUNCTION()
    void ExtOnIntroAnimationComplete() const;
    
};

