#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ExtensionUIData.generated.h"

UCLASS()
class OAKGAME_API UExtensionUIData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText JoinCount;
    
    UPROPERTY(EditAnywhere)
    FText JoinLabel;
    
    UPROPERTY(EditAnywhere)
    FText Joined;
    
    UPROPERTY(EditAnywhere)
    FText SubscribersBonus;
    
    UPROPERTY(EditAnywhere)
    FText ShiftAccountNotLinked;
    
    UPROPERTY(EditAnywhere)
    FText PollResultTitle;
    
    UPROPERTY(EditAnywhere)
    FText PollResultVotes;
    
    UPROPERTY(EditAnywhere)
    FText ProfileGameSettingsDifficulty;
    
    UPROPERTY(EditAnywhere)
    FText ProfileGameSettingsGroupMode;
    
    UPROPERTY(EditAnywhere)
    FText ProfileGameSettingsPlaythrough;
    
    UPROPERTY(EditAnywhere)
    FText ProfileGameSettingsMayhem;
    
    UPROPERTY(EditAnywhere)
    FText StoryModeName;
    
    UPROPERTY(EditAnywhere)
    FText StoryModeShortName;
    
    UPROPERTY(EditAnywhere)
    FText StoryModeDescription;
    
    UPROPERTY(EditAnywhere)
    FText NormalModeName;
    
    UPROPERTY(EditAnywhere)
    FText NormalModeShortName;
    
    UPROPERTY(EditAnywhere)
    FText NormalModeDescription;
    
    UPROPERTY(EditAnywhere)
    FText CooperationName;
    
    UPROPERTY(EditAnywhere)
    FText CooperationShortName;
    
    UPROPERTY(EditAnywhere)
    FText CooperationDescription;
    
    UPROPERTY(EditAnywhere)
    FText CoopetitionName;
    
    UPROPERTY(EditAnywhere)
    FText CoopetitionShortName;
    
    UPROPERTY(EditAnywhere)
    FText CoopetitionDescription;
    
    UPROPERTY(EditAnywhere)
    FText MayhemName;
    
    UPROPERTY(EditAnywhere)
    FText MayhemShortName;
    
    UPROPERTY(EditAnywhere)
    FText MayhemDescription;
    
    UPROPERTY(EditAnywhere)
    FText PlaythroughNormalName;
    
    UPROPERTY(EditAnywhere)
    FText PlaythroughNormalShortName;
    
    UPROPERTY(EditAnywhere)
    FText PlaythroughNormalDescription;
    
    UPROPERTY(EditAnywhere)
    FText PlaythroughTVHMName;
    
    UPROPERTY(EditAnywhere)
    FText PlaythroughTVHMShortName;
    
    UPROPERTY(EditAnywhere)
    FText PlaythroughTVHMDescription;
    
    UPROPERTY(EditAnywhere)
    FText PopupClose;
    
    UPROPERTY(EditAnywhere)
    FText PopupSend;
    
    UPROPERTY(EditAnywhere)
    FText PopupSelect;
    
    UPROPERTY(EditAnywhere)
    FText MenuToggle;
    
    UPROPERTY(EditAnywhere)
    FText MenuProfile;
    
    UPROPERTY(EditAnywhere)
    FText MenuInventory;
    
    UPROPERTY(EditAnywhere)
    FText MenuSkillTree;
    
    UPROPERTY(EditAnywhere)
    FText MenuGuardianRank;
    
    UPROPERTY(EditAnywhere)
    FText MenuEvents;
    
    UPROPERTY(EditAnywhere)
    FText MenuAccountLink;
    
    UPROPERTY(EditAnywhere)
    FText MenuGameSettings;
    
    UPROPERTY(EditAnywhere)
    FText TabProfile;
    
    UPROPERTY(EditAnywhere)
    FText TabProfileStats;
    
    UPROPERTY(EditAnywhere)
    FText TabInventoryEquipment;
    
    UPROPERTY(EditAnywhere)
    FText TabInventoryBackpack;
    
    UPROPERTY(EditAnywhere)
    FText TabSkillTreeLeftBranch;
    
    UPROPERTY(EditAnywhere)
    FText TabSkillTreeMiddleBranch;
    
    UPROPERTY(EditAnywhere)
    FText TabSkillTreeRightBranch;
    
    UPROPERTY(EditAnywhere)
    FText TabGuardianRankRewards;
    
    UPROPERTY(EditAnywhere)
    FText TabGuardianRankStats;
    
    UPROPERTY(EditAnywhere)
    FText TabEvents;
    
    UPROPERTY(EditAnywhere)
    FText ToastLoaderHeader;
    
    UPROPERTY(EditAnywhere)
    FText ToastLoaderMessage;
    
    UPROPERTY(EditAnywhere)
    FText ToastPreorderHeader;
    
    UPROPERTY(EditAnywhere)
    FText ToastPreorderMessage;
    
    UPROPERTY(EditAnywhere)
    FText ToastBuyHeader;
    
    UPROPERTY(EditAnywhere)
    FText ToastBuyMessage;
    
    UPROPERTY(EditAnywhere)
    FText ToastDisabledHeader;
    
    UPROPERTY(EditAnywhere)
    FText ToastDisabledMessage;
    
    UPROPERTY(EditAnywhere)
    FText ToastEventStarted;
    
    UPROPERTY(EditAnywhere)
    FText ProfileCharacterLevel;
    
    UPROPERTY(EditAnywhere)
    FText ProfileGuardianRank;
    
    UPROPERTY(EditAnywhere)
    FText ProfileGuardianRankTooltip;
    
    UPROPERTY(EditAnywhere)
    FText ProfileMayhemLevel;
    
    UPROPERTY(EditAnywhere)
    FText ProfileStatSessionLifetime;
    
    UPROPERTY(EditAnywhere)
    FText ProfileStatDamageCaused;
    
    UPROPERTY(EditAnywhere)
    FText ProfileStatEnemiesKilled;
    
    UPROPERTY(EditAnywhere)
    FText ProfileStatTimeInjured;
    
    UPROPERTY(EditAnywhere)
    FText ProfileStatTimeDead;
    
    UPROPERTY(EditAnywhere)
    FText InventoryCardRating;
    
    UPROPERTY(EditAnywhere)
    FText InventoryCardLevelRequired;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardDefaultTypeName;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardAugmentTypeName;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardActionSkillTypeName;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardActionSkillAugmentTypeName;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardPassiveTypeName;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardPetTypeName;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardPoints;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardEquipped;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardNotEquipped;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardPurchased;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardNotEnoughPoints;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardNotPurchased;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardNotUnlocked;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardCurrentEffect;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardNextRank;
    
    UPROPERTY(EditAnywhere)
    FText SkillCardCustomizeBuild;
    
    UPROPERTY(EditAnywhere)
    FText GuardianRankCost;
    
    UPROPERTY(EditAnywhere)
    FText GuardianRankProgress;
    
    UPROPERTY(EditAnywhere)
    FText UpsellHeader;
    
    UPROPERTY(EditAnywhere)
    FText UpsellMessage;
    
    UPROPERTY(EditAnywhere)
    FText UpsellGrantAccessMessage;
    
    UPROPERTY(EditAnywhere)
    FText UpsellGrantAccessAction;
    
    UPROPERTY(EditAnywhere)
    FText UpsellLinkAccountMessage;
    
    UPROPERTY(EditAnywhere)
    FText UpsellLinkAccountAction;
    
    UPROPERTY(EditAnywhere)
    FText UpsellRefreshAction;
    
    UPROPERTY(EditAnywhere)
    FText UpsellLinkedMessage;
    
    UPROPERTY(EditAnywhere)
    FText UpsellViewShiftAction;
    
    UPROPERTY(EditAnywhere)
    FText AugmentOperativeGrenadeMod1;
    
    UPROPERTY(EditAnywhere)
    FText AugmentOperativeGrenadeMod2;
    
    UPROPERTY(EditAnywhere)
    FText AugmentOperativeActionSkillMod1;
    
    UPROPERTY(EditAnywhere)
    FText AugmentOperativeActionSkillMod2;
    
    UPROPERTY(EditAnywhere)
    FText AugmentGunnerRightHardPointSlot;
    
    UPROPERTY(EditAnywhere)
    FText AugmentGunnerRightHardPointMod;
    
    UPROPERTY(EditAnywhere)
    FText AugmentGunnerLeftHardPointSlot;
    
    UPROPERTY(EditAnywhere)
    FText AugmentGunnerLeftHardPointMod;
    
    UPROPERTY(EditAnywhere)
    FText AugmentBeastmasterActionSkillMod1;
    
    UPROPERTY(EditAnywhere)
    FText AugmentBeastmasterActionSkillMod2;
    
    UPROPERTY(EditAnywhere)
    FText BreadcrumbHome;
    
    UPROPERTY(EditAnywhere)
    FText NoTrinket;
    
    UPROPERTY(EditAnywhere)
    FText Redacted;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FText> AdditionalLines;
    
    UExtensionUIData();
};

