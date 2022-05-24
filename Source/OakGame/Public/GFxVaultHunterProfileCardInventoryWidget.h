#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxVaultHunterProfileCardInventoryWidget.generated.h"

class UGFxVaultHunterProfileCardInventoryItemWidget;

UCLASS(NonTransient)
class UGFxVaultHunterProfileCardInventoryWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxVaultHunterProfileCardInventoryItemWidget* WeaponClips[4];
    
    UPROPERTY(Transient)
    UGFxVaultHunterProfileCardInventoryItemWidget* GrenadeClip;
    
    UPROPERTY(Transient)
    UGFxVaultHunterProfileCardInventoryItemWidget* ShieldClip;
    
    UPROPERTY(Transient)
    UGFxVaultHunterProfileCardInventoryItemWidget* ClassModClip;
    
    UPROPERTY(Transient)
    UGFxVaultHunterProfileCardInventoryItemWidget* RelicClip;
    
public:
    UGFxVaultHunterProfileCardInventoryWidget();
};

