#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGameplayGlobals.h"
#include "ItemPoolCollection.h"
#include "VaultCardActiveChallengeList.h"
#include "EWeaponShotModifierType.h"
#include "AmpedShotSettings.h"
#include "PickupEvaluationSettings.h"
#include "Vector2DWaveform.h"
#include "OakVehicleManagerSettings.h"
#include "EOakLeague.h"
#include "AttributeInitializationData.h"
#include "Engine/Scene.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayGlobals.generated.h"

class AActor;
class UHitRegionData;
class UWwiseEvent;
class UEffectCollectionData;
class UInventorySlotData;
class UOakLoadingScreenExpansionData;
class UDownloadableExpansionData;
class UInventoryCategoryData;
class UInventoryRarityData;
class UOakSDUData;
class UPatchExpansionData;
class ULootSpawnPatternData;
class UDuelGlobals;
class UTutorialGlobals;
class UDialogScriptData;
class UManufacturerData;
class UHitReactionTag;
class UVaultHunterProfileCard;
class UGuardianRankRewardData;
class UFriendGlobals;
class UDEPRECATED_OakMayhemUIDataAsset;
class UOakBodyMeshLinkedParameterData;
class UGameStatData;
class UMission;
class UAIDialogEventData;
class UDEPRECATED_OakMayhemModifiersDataAsset;
class UPhotoModeGlobals;
class UGbxAction_CoordinatedEffect;
class UGuardianRankRewardCategoryData;
class UGuardianRankPerkData;
class UGbxAction;
class UPlayerAlertData;
class UZoneMapGlobalsData;
class UUsabilityDataSelection;
class UGalaxyData;
class UGameStatList;
class UZoneMapListData;
class UGbxCustomizationTypeData;
class UGbxCustomizationTargetData;
class UDataTable;
class UDamageSource;
class UChallengeList;
class UMayhemOverrideDataAsset;
class UOakVaultCardRewardData;
class UItemPoolData;

UCLASS()
class OAKGAME_API UGameplayGlobals : public UGbxGameplayGlobals {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float PrimaryHealthLowPercent;
    
    UPROPERTY(EditDefaultsOnly)
    float PrimaryHealthVeryLowPercent;
    
    UPROPERTY(EditDefaultsOnly)
    float ResurrectionCostPercent;
    
    UPROPERTY(EditDefaultsOnly)
    float SecondaryHealthLowPercent;
    
    UPROPERTY(EditDefaultsOnly)
    float SecondaryHealthVeryLowPercent;
    
    UPROPERTY(EditDefaultsOnly)
    UHitRegionData* ProjectedShieldHitRegion;
    
    UPROPERTY(EditDefaultsOnly)
    float AmmoLowPercent;
    
    UPROPERTY(EditDefaultsOnly)
    float CoVLoadedAmmoRegenScalar;
    
    UPROPERTY()
    TSubclassOf<UEffectCollectionData> AmpedShotTracerFX;
    
    UPROPERTY()
    TSubclassOf<UEffectCollectionData> AmpedShotBeamFX;
    
    UPROPERTY()
    UWwiseEvent* AmpedShotSound;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EWeaponShotModifierType, FAmpedShotSettings> AmpedShotSettingsByType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* WeaponInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* ShieldInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* GrenadeModInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* CreditsInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* EridiumInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* VaultCoinInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* DiamondKeyInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* GoldenKeyInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* WeaponSkinInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* WeaponTrinketInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* HealthPickupInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* ArtifactInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* AmmoInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UInventoryCategoryData*> InventoryTypeCategories;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UInventorySlotData> BaseWeaponInventorySlotType;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UInventorySlotData> ShieldInventorySlotType;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryRarityData* InventoryRarityMission;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryRarityData* InventoryRarityMoney;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryRarityData* InventoryRarityCommon;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryRarityData* InventoryRarityUncommon;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryRarityData* InventoryRarityRare;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryRarityData* InventoryRarityVeryRare;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryRarityData* InventoryRarityLegendary;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UInventoryRarityData*> LostLootRarities;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxLostLootSize;
    
    UPROPERTY(EditDefaultsOnly)
    int32 LostLootIncrementPerSDU;
    
    UPROPERTY(EditDefaultsOnly)
    UOakSDUData* LostLootSDUData;
    
    UPROPERTY(EditDefaultsOnly)
    float InventorySaveGameFrequency;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxNPCMailSize;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector2DWaveform> CharacterAccuracyPattern;
    
    UPROPERTY(EditAnywhere)
    float CharacterAccuracyPatternTimeScale;
    
    UPROPERTY(EditAnywhere)
    float EditorCharacterAccuracyPatternHistoryTime;
    
    UPROPERTY(EditAnywhere)
    float EditorCharacterAccuracyPatternHistoryDelta;
    
    UPROPERTY(EditDefaultsOnly)
    float MassPickupRadius;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MassPickupMaxPullAmount;
    
    UPROPERTY(EditDefaultsOnly)
    float MassPickupMaxDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float MassPickupMinDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float MassPickupMaxTotalDelay;
    
    UPROPERTY(EditDefaultsOnly)
    FPickupEvaluationSettings PickupEvaluationSettings;
    
    UPROPERTY(EditDefaultsOnly)
    FOakVehicleManagerSettings OakVehicleManagerSettings;
    
    UPROPERTY(EditDefaultsOnly)
    ULootSpawnPatternData* DefaultDropLootPattern;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAutomaticallyMassPickupConsumablesFromLootables;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultAutoLootConsumableDelay;
    
    UPROPERTY(EditDefaultsOnly)
    bool bConsumablesAttachedToLootablesCanBeTouchPickuped;
    
    UPROPERTY()
    float TriggerForceCleanupLongLifeOverflowPercent;
    
    UPROPERTY()
    float ForceCleanupLongLifePickupsPercent;
    
    UPROPERTY()
    bool bCleanupPickupsBetweenSlaughterRounds;
    
    UPROPERTY()
    float MinimumAgeToCleanupSlaughterPickups;
    
    UPROPERTY()
    int32 ForeverPickupSlaughterCleanupThreshold;
    
    UPROPERTY(EditAnywhere)
    float BulletMagnetismTargetOffset;
    
    UPROPERTY(EditAnywhere)
    float MaxTargetingDistance;
    
    UPROPERTY(EditAnywhere)
    float TargetingTraceUpdateTime;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<EOakLeague> ActiveLeague;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 LeagueInstance;
    
    UPROPERTY(EditAnywhere)
    UDialogScriptData* MissionKickoffScript;
    
    UPROPERTY(EditAnywhere)
    UManufacturerData* MissionManufacturer;
    
    UPROPERTY(EditAnywhere)
    UInventoryRarityData* MissionRarity;
    
    UPROPERTY(EditDefaultsOnly)
    UFriendGlobals* FriendGlobals;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* MissionInventoryCategory;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* MissionInventoryCategory_Vehicle;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MissionCreditsRewardFormula;
    
    UPROPERTY(EditAnywhere)
    float PickupFailsafeMinutes;
    
    UPROPERTY(EditAnywhere)
    uint32 MissionSpawnerFailsafeMinutes;
    
    UPROPERTY(EditAnywhere)
    float MissionDeliveryRequiredProximityRadius;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* OptionalObjectiveCompletedStat;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UMission> TutorialSkipMission;
    
    UPROPERTY(EditAnywhere)
    UAIDialogEventData* AIDialogEventData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_CoordinatedEffect> DefaultEnemyFadeoutEffect;
    
    UPROPERTY(EditAnywhere)
    UDuelGlobals* DuelGlobals;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UGuardianRankRewardCategoryData*> GuardianRankRewardCategories;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UGuardianRankRewardData*> GuardianRankRewards;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UGuardianRankPerkData*> GuardianRankPerks;
    
    UPROPERTY(EditDefaultsOnly)
    float SkillRespecCostPercent;
    
    UPROPERTY(EditAnywhere)
    UPhotoModeGlobals* PhotoModeGlobals;
    
    UPROPERTY(EditAnywhere)
    UTutorialGlobals* TutorialGlobals;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerAlertRetriggerDelay;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* PlayerAlertSound;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAction> PlayerAlertPointingAction;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UPlayerAlertData*> PlayerAlertData;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* ReceivedMailSound;
    
    UPROPERTY(EditDefaultsOnly)
    UZoneMapGlobalsData* ZoneMapGlobals;
    
    UPROPERTY(EditDefaultsOnly)
    UGalaxyData* GalaxyMap;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftObjectPtr<UZoneMapListData>> ZoneMaps;
    
    UPROPERTY(EditAnywhere)
    UGbxCustomizationTypeData* CustomizationTypeData_Head;
    
    UPROPERTY(EditAnywhere)
    UGbxCustomizationTypeData* CustomizationTypeData_Body;
    
    UPROPERTY(EditAnywhere)
    UGbxCustomizationTypeData* CustomizationTypeData_Skin;
    
    UPROPERTY(EditAnywhere)
    UGbxCustomizationTypeData* CustomizationTypeData_Emote;
    
    UPROPERTY(EditAnywhere)
    FName CustomizationColorName_Primary;
    
    UPROPERTY(EditAnywhere)
    FName CustomizationColorName_Secondary;
    
    UPROPERTY(EditAnywhere)
    FName CustomizationColorName_Tertiary;
    
    UPROPERTY(EditDefaultsOnly)
    UVaultHunterProfileCard* VaultHunterProfileCard;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_CoordinatedEffect> DigistructOutGearEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_CoordinatedEffect> DigistructInGearEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ModifierTargetResolverTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ModifierStatusEffectTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ModifierTable;
    
    UPROPERTY(EditDefaultsOnly)
    FPostProcessSettings StatusMenuPPSettings;
    
    UPROPERTY(EditDefaultsOnly)
    float StatusMenuPPBlendInTime;
    
    UPROPERTY(EditDefaultsOnly)
    float StatusMenuPPBlendOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDisableSeparateTransluencyInStatusMenu;
    
    UPROPERTY(EditDefaultsOnly)
    float ActorCullingRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer DefaultSingularityIgnoreTags;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGameStatData> SuicideByExplosionStat;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGameStatData> WeaponsFoundStat;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGameStatData> AmpShieldKillStat;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGameStatData> CompletedTradeStat;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> ExplodingBarrelBaseClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGameStatData> KillWithExplodingBarrelStat;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGameStatData> CosmeticPurchasedStat;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGameStatData> ItemSoldStat;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGameStatData> HijackedVehiclePartStat;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGameStatData> GuardianRankStat;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ChallengeCreditsRewardFormula;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ChallengeEridiumRewardFormula;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag AnointedEridianCrystalGameplayTag;
    
    UPROPERTY(EditAnywhere)
    UUsabilityDataSelection* AnointedCrystalMeleeUsableSelection;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UDamageSource> EridianResonatorDamageSource;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* AnointedDeathHitReaction;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGameStatData> BloodyHarvestKillWithLeagueWeaponStat;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGameStatData> BloodyHarvestCollectLeagueLootStat;
    
    UPROPERTY(EditDefaultsOnly)
    bool EnableCitizenScience;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVaultCardActiveChallengeList> ActiveVaultCardChallenges;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxCustomizationTargetData> BodyMeshTarget;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxCustomizationTypeData> BodyMeshType;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UOakBodyMeshLinkedParameterData> BodyMeshLinkedParameters;
    
private:
    UPROPERTY(Transient)
    TArray<UChallengeList*> MasterChallengeLists;
    
    UPROPERTY(Transient)
    TArray<UChallengeList*> MasterVaultCardChallengeLists;
    
    UPROPERTY(Transient)
    uint32 MaxVaultCardID;
    
    UPROPERTY(Transient)
    TArray<uint32> AssociatedVaultCardIDs;
    
    UPROPERTY(Transient)
    TArray<UGameStatList*> MasterGameStatLists;
    
    UPROPERTY(Transient)
    TArray<UOakLoadingScreenExpansionData*> MasterLoadingScreenData;
    
    UPROPERTY(Transient)
    TArray<UDEPRECATED_OakMayhemModifiersDataAsset*> MasterMayhemModeData;
    
    UPROPERTY(Transient)
    TArray<UDEPRECATED_OakMayhemUIDataAsset*> MasterMayhemModeUIData;
    
    UPROPERTY(Transient)
    TArray<UMayhemOverrideDataAsset*> MasterMayhemModeTwoData;
    
    UPROPERTY(Transient)
    TArray<UPatchExpansionData*> MasterPatchExpansionData;
    
    UPROPERTY(Transient)
    TArray<UDownloadableExpansionData*> MasterDownloadableExpansionData;
    
    UPROPERTY(Transient)
    TMap<FGameplayTag, UGameStatData*> MasterKillStatMap;
    
    UPROPERTY(Transient)
    TArray<UGuardianRankRewardData*> MasterGuardianRankRewards;
    
    UPROPERTY(Transient)
    TArray<UGuardianRankPerkData*> MasterGuardianRankPerks;
    
    UPROPERTY(Transient)
    TArray<UOakVaultCardRewardData*> MasterVaultCardRewards;
    
    UPROPERTY(Transient)
    TArray<UItemPoolData*> MasterItemPoolsToReplaceWithRandomDateBased;
    
    UPROPERTY(Transient)
    TArray<FItemPoolCollection> MasterRandomDateBasedItemPools;
    
public:
    UGameplayGlobals();
};

