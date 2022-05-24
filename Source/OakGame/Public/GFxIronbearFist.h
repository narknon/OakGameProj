#pragma once
#include "CoreMinimal.h"
#include "GFxIronbearWeaponWidget.h"
#include "GFxIronbearFist.generated.h"

class UGbxDamageType;
class AOakWeapon_IronBearHardPoint;
class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxIronbearFist : public UGFxIronbearWeaponWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AOakWeapon_IronBearHardPoint* CachedEquippedWeapon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RechargingClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BracketAnim;
    
    UPROPERTY(Transient)
    UGbxGFxObject* AnimateBar;
    
public:
    UGFxIronbearFist();
    UFUNCTION(BlueprintCallable)
    void UpdateFistElementalIcon(const UGbxDamageType* NewDamageType);
    
    UFUNCTION(BlueprintCallable)
    void SetFistReadyState(bool ReadyState);
    
};

