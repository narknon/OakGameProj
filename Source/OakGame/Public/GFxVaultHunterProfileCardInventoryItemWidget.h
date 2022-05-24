#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxVaultHunterProfileCardInventoryItemWidget.generated.h"

UCLASS(NonTransient)
class UGFxVaultHunterProfileCardInventoryItemWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* RarityClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* WeaponTypeClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* IconGearClip;
    
public:
    UGFxVaultHunterProfileCardInventoryItemWidget();
};

