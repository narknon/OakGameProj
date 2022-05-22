#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxUIGlobals.h"
#include "OakBackpackCapacityThreshold.h"
#include "GFxNewsMenuFullscreenData.h"
#include "CurrencyInfo.h"
#include "OakThumbnailManagerRenderProperties.h"
#include "OakThumbnailManagerConfig.h"
#include "UObject/NoExportTypes.h"
#include "EVoiceOfGodSpeaker.h"
#include "ECARPartType.h"
#include "UIGlobals.generated.h"

class UGFxModalTutorialDataAsset;
class UGFxStatusMenuData;
class UGFxNewsMenuItemDataAsset;
class UInWorldIconData;
class UDialogParameter;
class UGbxMenuData;
class UGbxGFxDialogBoxData;
class UGbxHUDStateData;
class UPlayerClassIdentifier;
class UTexture;
class UTutorialMessageDataAsset;
class UBoosterData;
class UGFxControllerDisconnectMovie;
class UDialogEvent;
class UInventoryCategoryData;
class UOakCARMenuLoadout;
class UGbxInputActionData;
class USwfMovie;
class UGFxRolloutMessage;
class UHUDNotificationAsset;
class UMediaSource;
class UGbxHUDData;

UCLASS(BlueprintType)
class OAKGAME_API UUIGlobals : public UGbxUIGlobals {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> CreditsMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxGFxDialogBoxData> EULAMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxGFxDialogBoxData> ReportPlayerMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxGFxDialogBoxData> DirectXUpgradeMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* MissionIcon_Default;
    
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* MissionIcon_Plot;
    
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* MissionIcon_Side;
    
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* MissionIcon_ProvingGrounds;
    
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* MissionIcon_CircleOfSlaughter;
    
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* MissionIcon_Raid;
    
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* MissionIcon_RareSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* MissionAreaIcon;
    
    UPROPERTY(EditAnywhere)
    TMap<TSoftObjectPtr<UPlayerClassIdentifier>, UTexture*> PlayerClassProfileIcons;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxMenuData* PauseMenuData;
    
    UPROPERTY(EditAnywhere)
    UGFxStatusMenuData* GFxStatusMenuData;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* PCTextChatMenuData;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* PCMenuTextChatMenuData;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* PCTextChatMenuNotificationMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxMenuData* GFxHUDInitializationMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxMenuData* GFxModalTutorialMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    UGFxModalTutorialDataAsset* DefaultModalTutorialData;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxMenuData* ItemInspectionMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> StatusMenuNavBarHintWidgetOffsets;
    
    UPROPERTY(EditAnywhere)
    UTutorialMessageDataAsset* FastTravelTutorialAsset;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UGFxNewsMenuItemDataAsset>> CurrentNewsItems;
    
    UPROPERTY(EditAnywhere)
    TArray<FGFxNewsMenuFullscreenData> FullscreenNewsItems;
    
    UPROPERTY(EditAnywhere)
    TArray<FGFxNewsMenuFullscreenData> FullscreenNewsBackgrounds;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGFxControllerDisconnectMovie> ControllerDisconnectMovie;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxMenuData* QuickEmoteMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxMenuData* ItemTradingMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 OverLevelAmount;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOverrideToHideFriendlyBars;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakBackpackCapacityThreshold> BackpackThresholds;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* WeaponCategory;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* GrenadeCategory;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* ShieldCategory;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* ArtifactCategory;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* ClassModCategory;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* InstantHealthCategory;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* AmmoCategory;
    
    UPROPERTY(EditAnywhere)
    TMap<UInventoryCategoryData*, FOakThumbnailManagerRenderProperties> CategoryToRenderPropertiesMap;
    
    UPROPERTY(EditAnywhere)
    FOakThumbnailManagerRenderProperties RenderPropertiesForOtherThumbnail;
    
    UPROPERTY(EditAnywhere)
    UGbxGFxDialogBoxData* GFxDialogBoxTemplate;
    
    UPROPERTY(EditAnywhere)
    FOakThumbnailManagerConfig IconConfig;
    
    UPROPERTY(EditAnywhere)
    FText EridianAnalyser;
    
    UPROPERTY(EditAnywhere)
    FText EridianResonator;
    
    UPROPERTY(EditAnywhere)
    FText MayhemMode;
    
    UPROPERTY(EditAnywhere)
    FText ArtifactSlot;
    
    UPROPERTY(EditAnywhere)
    FText EridianFabricator;
    
    UPROPERTY(EditAnywhere)
    FCurrencyInfo MoneyCurrencyInfo;
    
    UPROPERTY(EditAnywhere)
    FCurrencyInfo EridiumCurrencyInfo;
    
    UPROPERTY(EditAnywhere)
    FCurrencyInfo GoldenKeyCurrencyInfo;
    
    UPROPERTY(EditAnywhere)
    FCurrencyInfo VaultCoinCurrencyInfo;
    
    UPROPERTY(EditAnywhere)
    FCurrencyInfo DiamondKeyCurrencyInfo;
    
    UPROPERTY(EditAnywhere)
    FCurrencyInfo VaultCardOneKeyCurrencyInfo;
    
    UPROPERTY(EditAnywhere)
    FCurrencyInfo VaultCardTwoKeyCurrencyInfo;
    
    UPROPERTY(EditAnywhere)
    FCurrencyInfo VaultCardThreeKeyCurrencyInfo;
    
    UPROPERTY(EditAnywhere)
    bool bCanDisplayDiamondKeys;
    
protected:
    UPROPERTY(EditAnywhere)
    TMap<FName, UGbxInputActionData*> MenuInputMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> ClassNameToSkillTutorialMap;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float MaxPathRange;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxSubPathNodeRangeSquared;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FriendlyColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor EnemyColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NeutralColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FriendlyNPCColor_Slight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor EnemyColor_Slight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FriendlyPlayerColor_Slight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor StandardTextColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor InvalidOptionColor;
    
    UPROPERTY(EditDefaultsOnly)
    float GrenadeDangerRadiusScalar;
    
    UPROPERTY(EditDefaultsOnly)
    float GrenadeDangerMinimumRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerGrenadeDangerDelay;
    
    UPROPERTY(EditAnywhere)
    bool bPauseMenuPausesGame;
    
    UPROPERTY(EditAnywhere)
    bool bStatusMenuPausesGame;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, TSoftObjectPtr<USwfMovie>> SkillMenuIconMapping;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGFxRolloutMessage> TravelMessageMovieClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGFxRolloutMessage> OnlineMessageMovieClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGFxRolloutMessage> SocialEventMessageMovieClass;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* ErrorMessageAsset;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* DiscoveryNotificationAsset;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* AreaEnteredNotificationAsset;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* VaultRewardNotificationAsset;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* CrewChallengeNotification;
    
    UPROPERTY(EditAnywhere)
    FText AllPlayersRequiredTitlePresent;
    
    UPROPERTY(EditAnywhere)
    FText AllPlayersRequiredTitleAbsent;
    
    UPROPERTY(EditAnywhere)
    FText AllPlayersRequiredMessagePresent;
    
    UPROPERTY(EditAnywhere)
    FText AllPlayersRequiredMessageAbsent;
    
    UPROPERTY(EditAnywhere)
    float AllPlayersRequiredDuration;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, TSoftObjectPtr<USwfMovie>> LanguageToFontSWFMap;
    
    UPROPERTY(EditAnywhere)
    TMap<ECARPartType, FString> VehicleIconTypeToLabelMap;
    
    UPROPERTY(EditAnywhere)
    TArray<UOakCARMenuLoadout*> VehicleDefaultLoadouts;
    
    UPROPERTY(EditAnywhere)
    float SubtitleVisibilityShowVolumeDB;
    
    UPROPERTY(EditAnywhere)
    float SubtitleVisibilityHideVolumeDB;
    
    UPROPERTY(EditAnywhere)
    float SubtitleVisibilityUpdateFrequency;
    
    UPROPERTY(EditAnywhere)
    float SubtitleTimeBeforeHide;
    
    UPROPERTY(EditAnywhere)
    FText SubtitleDisplayFormat;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* DefaultIdleDialogEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* DefaultIdleDialogTargetParamater;
    
    UPROPERTY(EditAnywhere)
    UMediaSource* VoGSource;
    
    UPROPERTY(EditAnywhere)
    EVoiceOfGodSpeaker VoGSpeakerType;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UGbxHUDData> LateJoinHUDContainer;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UGbxHUDStateData> LateJoinHUDState;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* SkillMenuData;
    
    UPROPERTY(EditAnywhere)
    UBoosterData* CitizenScienceBoosterData;
    
    UUIGlobals();
};

