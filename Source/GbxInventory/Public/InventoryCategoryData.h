#pragma once
#include "CoreMinimal.h"
#include "EPickupActionType.h"
#include "GbxInventoryCategoryData.h"
#include "InventoryCategoryData.generated.h"

UCLASS()
class GBXINVENTORY_API UInventoryCategoryData : public UGbxInventoryCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool NotAddedToInventory;
    
    UPROPERTY(EditAnywhere)
    EPickupActionType PickupActionType;
    
    UPROPERTY(EditAnywhere)
    bool SharedWithAllPlayers;
    
    UPROPERTY(EditAnywhere)
    bool bSharedPlayersMustBeOnFriendlyTeam;
    
    UPROPERTY(EditAnywhere)
    bool bLevelSyncPickupCurrency;
    
    UPROPERTY(EditAnywhere)
    bool ManualActivation;
    
    UPROPERTY(EditAnywhere)
    FText CategoryDisplayName;
    
    UPROPERTY(EditAnywhere)
    bool bCanInspectItem;
    
    UPROPERTY(EditAnywhere)
    bool bCanInspectManufacturer;
    
    UPROPERTY(EditAnywhere)
    bool bCanInspectElementalEffects;
    
    UPROPERTY(EditAnywhere)
    bool bCanInspectParts;
    
    UPROPERTY(EditAnywhere)
    bool bCanChangeSkins;
    
    UPROPERTY(EditAnywhere)
    bool bUseEquipAudioFromWeaponType;
    
    UPROPERTY(EditAnywhere)
    bool bDoNotUseCosmeticLabelInBackpackCells;
    
    UPROPERTY(EditAnywhere)
    FName EquipAudioEventName;
    
    UPROPERTY(EditAnywhere)
    bool bEnableSaveGameQuantityChangeThrottling;
    
    UInventoryCategoryData();
};

