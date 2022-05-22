#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenuSwitcher.h"
#include "GFxStatusMenuSubmenuKeyMap.h"
#include "EchoDeviceUIController.h"
#include "StandInUIController.h"
#include "GFxStatusMenuNavBarInfo.h"
#include "EGFxStatusMenuTransitionReason.h"
#include "GFxStatusMenu.generated.h"

class AOakGameState;
class AWeapon;
class AZoneMapViewer;
class UGFxStatusMenuNavBar;

UCLASS(Blueprintable)
class UGFxStatusMenu : public UGbxGFxMenuSwitcher {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGFxStatusMenuSubmenuKeyMap> SubmenuKeymapping;
    
    UPROPERTY(EditDefaultsOnly)
    FName StatusMenuInputAction;
    
    UPROPERTY(EditDefaultsOnly)
    FEchoDeviceUIController EchoDeviceController;
    
    UPROPERTY(EditDefaultsOnly)
    FStandInUIController StandInController;
    
    UPROPERTY(EditAnywhere)
    FName BackgroundParticleEffectWipeSound;
    
    UPROPERTY(EditAnywhere)
    FName BackgroundParticleEffectCloseSound;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AOakGameState> OakGameState;
    
    UPROPERTY(Transient)
    UGFxStatusMenuNavBar* StatusMenuNavBar;
    
    UPROPERTY(Transient)
    AZoneMapViewer* ZoneMapViewer;
    
    UPROPERTY(Transient)
    bool bBackgroundParticleStateOn;
    
private:
    UPROPERTY(Transient)
    TArray<FGFxStatusMenuNavBarInfo> NavBarInfos;
    
public:
    UGFxStatusMenu();
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayTransitionAnimation(EGFxStatusMenuTransitionReason Reason) const;
    
protected:
    UFUNCTION()
    void OnPlayerWeaponChanged(AWeapon* NewWeapon, AWeapon* LastWeapon) const;
    
    UFUNCTION()
    void OnNumPlayersChanged(int32 NewNumPlayers) const;
    
};

