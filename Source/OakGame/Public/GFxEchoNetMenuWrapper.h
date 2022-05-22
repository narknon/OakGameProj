#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenuSwitcher.h"
#include "GFxFrontendTargetMenuInterface.h"
#include "UObject/NoExportTypes.h"
#include "GFxEchoNetMenuWrapper.generated.h"

class AGbxPlayerController;
class UParticleSystem;
class UGbxGFxMenuSwitcherNavWidget;

UCLASS()
class OAKGAME_API UGFxEchoNetMenuWrapper : public UGbxGFxMenuSwitcher, public IGFxFrontendTargetMenuInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RosterMenuPageIndex;
    
    UPROPERTY(EditAnywhere)
    FName MenuToGotoOffline;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* BackdropParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float BackgroundParticleDepth;
    
    UPROPERTY(EditAnywhere)
    FVector2D NavListSpacing;
    
    UPROPERTY(Transient)
    UGbxGFxMenuSwitcherNavWidget* NavBarClip;
    
    UPROPERTY(Transient)
    AGbxPlayerController* TargetPC;
    
    UPROPERTY(Transient)
    FName TargetMenuWhenGoingOnline;
    
public:
    UGFxEchoNetMenuWrapper();
    
    // Fix for true pure virtual functions not being implemented
};

