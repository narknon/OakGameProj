#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GFxStatusMenuSubmenu.h"
#include "UObject/NoExportTypes.h"
#include "GFxVaultCardMenu.generated.h"

class UGbxGFxObject;
class AOakUIActorContainer;
class UGbxGFxHintWidget;
class UGFxVaultCardFloatingPanel;
class UGFxVaultCardChallengePanel;
class UGbxGFxGridScrollingList;
class UGFxLoadedItemCardBase;
class UGbxTextField;
class UGbxMenuData;
class ALootableObject;
class UOakThumbnailManager;
class UWeaponSkinPartData;
class AOakCharacter_StandIn;
class USwfMovie;
class AActor;
class UGbxGFxListCell;

UCLASS()
class OAKGAME_API UGFxVaultCardMenu : public UGFxStatusMenuSubmenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* RewardsClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RewardsRowClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RewardHeaderIconClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* FloatingPanelKeyIconClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ChallengePanelKeyIconClip;
    
    UPROPERTY(Transient)
    UGFxVaultCardFloatingPanel* FloatingPanelClip;
    
    UPROPERTY(Transient)
    UGFxVaultCardChallengePanel* ChallengePanelClip;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* NavBarList;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NavBarHintPrev;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NavBarHintNext;
    
    UPROPERTY(Transient)
    UGbxTextField* VaultCardTitleTextField;
    
    UPROPERTY(Transient)
    AOakUIActorContainer* VaultCardChestContainer;
    
    UPROPERTY(Transient)
    ALootableObject* VaultCardLootableChest;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* ThumbnailManager;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCardBase* ItemCardBase;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCardBase* ItemCardReward;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RewardTypeClip;
    
    UPROPERTY(Transient)
    FText ChestRewardTitleText;
    
    UPROPERTY(Transient)
    FText ChestRewardDescText;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UWeaponSkinPartData> OriginalWeaponSkin;
    
public:
    UPROPERTY(EditAnywhere)
    FName PurchaseRewardSoundFX;
    
    UPROPERTY(EditAnywhere)
    FName InsufficientFundsSoundFX;
    
    UPROPERTY(EditAnywhere)
    FName OpenChestSoundFX;
    
    UPROPERTY(EditAnywhere)
    FName RedeemRewardSoundFX;
    
    UPROPERTY(EditAnywhere)
    FName StartInspectItemSoundFX;
    
    UPROPERTY(EditAnywhere)
    FName StopInspectItemSoundFX;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOakUIActorContainer> VaultCardChestContainerClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOakUIActorContainer> MysteryGearClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOakCharacter_StandIn> OperativeStandInClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOakCharacter_StandIn> GunnerStandInClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOakCharacter_StandIn> BeastmasterStandInClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOakCharacter_StandIn> SirenStandInClass;
    
    UPROPERTY(EditAnywhere)
    USwfMovie* ItemCardMovie;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* ItemInspectionMenuData;
    
    UPROPERTY(EditAnywhere)
    int32 NumberOfVisibleRewardRows;
    
    UPROPERTY(EditAnywhere)
    int32 NumberOfVisibleRewardRows_Split;
    
    UPROPERTY(EditAnywhere)
    FVector2D RewardRowSize;
    
    UGFxVaultCardMenu();
private:
    UFUNCTION()
    void SetAdjancenyInfoForCells() const;
    
    UFUNCTION()
    void OnStandInActorCreated(AActor* InStandInActor) const;
    
    UFUNCTION()
    void OnRewardsListScrollBarUpdated(float SliderPercentage) const;
    
    UFUNCTION()
    void OnRewardItemCardReady() const;
    
    UFUNCTION()
    void OnPlayerOpenChest(ALootableObject* InLootable) const;
    
    UFUNCTION()
    void OnNavCellSelectionChanged(UGbxGFxListCell* ListItem) const;
    
    UFUNCTION()
    void OnItemCardReady() const;
    
    UFUNCTION()
    void OnChestOpeningAnimationComplete(ALootableObject* InLootable) const;
    
public:
    UFUNCTION()
    void extOpenChestAnimationComplete() const;
    
};

