#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenuSwitcherSubmenu.h"
#include "EGFxStatusMenuTransitionReason.h"
#include "GFxStatusMenuSubmenu.generated.h"

UCLASS()
class UGFxStatusMenuSubmenu : public UGbxGFxMenuSwitcherSubmenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float IntroTimeout;
    
    UPROPERTY(EditAnywhere)
    float OuttroTimeout;
    
    UPROPERTY(EditAnywhere)
    bool bAllowPause;
    
    UPROPERTY(EditAnywhere)
    bool bShowMapMesh;
    
    UPROPERTY(EditAnywhere)
    bool bAllowMapMenuAxisInput;
    
protected:
    UPROPERTY(Transient)
    bool bHidStatusMenuForPauseMenu;
    
    UPROPERTY(Transient)
    bool bIsPlayingIntro;
    
    UPROPERTY(Transient)
    bool bIsPlayingOuttro;
    
    UPROPERTY(Transient)
    float TransitionTimeRemaining;
    
    UPROPERTY(Transient)
    EGFxStatusMenuTransitionReason QueuedTransitionAction;
    
    UPROPERTY(Transient)
    FName QueuedTransitionSwitchToMenu;
    
public:
    UGFxStatusMenuSubmenu();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnOuttroAnimationComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnIntoAnimationComplete() const;
    
};

