#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "GbxGFxLeagueMenuChestButton.generated.h"

class UOakCustomizationData;
class AActor;
class UOakChallenge;
class UGbxTextField;
class UWeaponSkinPartData;
class UGbxGFxObject;
class UWeaponTrinketPartData;

UCLASS(NonTransient)
class OAKGAME_API UGbxGFxLeagueMenuChestButton : public UGbxGFxButton {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxTextField* UnlockNumberField;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ChestLockedIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ChestAvailableIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ChestOpenIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* UnlockHintWrapper;
    
    UPROPERTY(Transient)
    UGbxTextField* UnlockHint;
    
    UPROPERTY(Transient)
    UGbxTextField* UnlockText;
    
    UPROPERTY(Transient)
    UOakChallenge* MasterLeagueChallenge;
    
    UPROPERTY(Transient)
    TArray<UOakCustomizationData*> CustomizationRewards;
    
    UPROPERTY(Transient)
    TArray<UWeaponSkinPartData*> WeaponSkinRewards;
    
    UPROPERTY(Transient)
    TArray<UWeaponTrinketPartData*> WeaponTrinketRewards;
    
    UPROPERTY(Transient)
    TArray<AActor*> ItemPoolRewards;
    
    UGbxGFxLeagueMenuChestButton();
};

