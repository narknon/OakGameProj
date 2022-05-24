#pragma once
#include "CoreMinimal.h"
#include "GFxInWorldIcon.h"
#include "EOverheadNameplateDisplayState.h"
#include "EOverheadNameplateHealthState.h"
#include "UObject/NoExportTypes.h"
#include "GFxOverheadNameplate.generated.h"

class UGbxGFxObject;
class UGbxGFxProgressBar;
class UNameplateInfoProviderInterface;
class INameplateInfoProviderInterface;

UCLASS(NonTransient)
class OAKGAME_API UGFxOverheadNameplate : public UGFxInWorldIcon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* CenteredNameContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CenteredNameObject;
    
    UPROPERTY(Transient)
    UGbxGFxObject* StateContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* StateObject;
    
    UPROPERTY(Transient)
    UGbxGFxObject* StateIndicator;
    
    UPROPERTY(Transient)
    UGbxGFxObject* StateArrow;
    
    UPROPERTY(Transient)
    UGbxGFxObject* StateArrowColors;
    
    UPROPERTY(Transient)
    UGbxGFxObject* WaypointIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* OverheadArrow;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* ReviveBar;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* DyingBar;
    
    UPROPERTY(Transient)
    TScriptInterface<INameplateInfoProviderInterface> CachedNameplateInfoProvider;
    
    UPROPERTY(Transient)
    EOverheadNameplateHealthState CachedOverheadNameplateHealthState;
    
    UPROPERTY(Transient)
    EOverheadNameplateDisplayState CachedOverheadNameplateDisplayState;
    
public:
    UGFxOverheadNameplate();
    UFUNCTION()
    void OnPlayerLocationChanged(const FVector NewLocation);
    
};

