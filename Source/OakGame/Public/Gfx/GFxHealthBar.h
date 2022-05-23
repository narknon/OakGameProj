#pragma once
#include "CoreMinimal.h"
#include "EHealthTypeState.h"
#include "GbxGFxHUDWidget.h"
#include "EGameResourcePoolState.h"
#include "GFxHealthBar.generated.h"

class UGbxGFxRechargeableProgressBar;
class UHealthBarInfoProviderInterface;
class IHealthBarInfoProviderInterface;

UCLASS()
class OAKGAME_API UGFxHealthBar : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FString NAME_ProgressBarId;
    
    UPROPERTY(EditAnywhere)
    FName NAME_HealthLowStop;
    
    UPROPERTY(EditAnywhere)
    FName NAME_HealthVeryLowStop;
    
    UPROPERTY(EditAnywhere)
    FName Name_HealthLowStart;
    
    UPROPERTY(EditAnywhere)
    FName NAME_HealthVeryLowStart;
    
    UPROPERTY(Transient)
    UGbxGFxRechargeableProgressBar* ProgressBar;
    
    UPROPERTY(Transient)
    TScriptInterface<IHealthBarInfoProviderInterface> CurrentHealthBarProvider;
    
    UPROPERTY(Transient)
    float CachedHealthPercent;
    
    UPROPERTY(Transient)
    int32 CachedHealthCurrentValue;
    
    UPROPERTY(Transient)
    EHealthTypeState CachedHealthTypeState;
    
    UPROPERTY(Transient)
    EGameResourcePoolState CachedResourcePoolState;
    
public:
    UGFxHealthBar();
private:
    UFUNCTION()
    void OnInjured() const;
    
    UFUNCTION()
    void OnHealthVeryLow() const;
    
    UFUNCTION()
    void OnHealthRegenerating() const;
    
    UFUNCTION()
    void OnHealthNormal() const;
    
    UFUNCTION()
    void OnHealthLow() const;
    
    UFUNCTION()
    void OnHealthFull() const;
    
    UFUNCTION()
    void OnDeath() const;
    
};

