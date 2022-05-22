#pragma once
#include "CoreMinimal.h"
#include "CinematicModeData.h"
#include "OakCinematicModeData.generated.h"

class UGbxHUDStateData;

UCLASS()
class UOakCinematicModeData : public UCinematicModeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAffectsInputAbilities;
    
    UPROPERTY(EditAnywhere)
    bool bAffectsStatusMenu;
    
    UPROPERTY(EditAnywhere)
    bool bAffectsQuickMenu;
    
    UPROPERTY(EditAnywhere)
    bool bClearMenus;
    
    UPROPERTY(EditAnywhere)
    bool bRestrictWeapons;
    
    UPROPERTY(EditAnywhere)
    bool bReapCorpses;
    
    UPROPERTY(EditAnywhere)
    bool bHideDroppedPickups;
    
    UPROPERTY(EditAnywhere)
    bool bAffectsWeaponActions;
    
    UPROPERTY(EditAnywhere)
    int32 AffectsWeaponActions;
    
    UPROPERTY(EditAnywhere)
    FName CameraMode;
    
    UPROPERTY(EditAnywhere)
    UGbxHUDStateData* OverrideHUDState;
    
    UPROPERTY(EditAnywhere)
    bool bEnableVOIPIcons;
    
    UPROPERTY(EditAnywhere)
    bool bAffectsPlayerMovement;
    
    UOakCinematicModeData();
};

