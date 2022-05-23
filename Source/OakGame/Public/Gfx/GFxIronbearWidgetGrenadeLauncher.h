#pragma once
#include "CoreMinimal.h"
#include "GFxIronbearWeaponWidget.h"
#include "GFxIronbearWidgetGrenadeLauncher.generated.h"

class UGbxTextField;
class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxIronbearWidgetGrenadeLauncher : public UGFxIronbearWeaponWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* RemainingAmmoText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ReloadAnimation;
    
    UPROPERTY(EditAnywhere)
    FString RemainingAmmoTextID;
    
    UPROPERTY(EditAnywhere)
    FString ReloadAnimationID;
    
public:
    UGFxIronbearWidgetGrenadeLauncher();
};

