#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolReference.h"
#include "GbxGFxHUDWidget.h"
#include "EGameResourcePoolState.h"
#include "EHealthTypeState.h"
#include "HealthType.h"
#include "SecondaryHealthDamageEventDetails.h"
#include "HealthTypeDepletedDetails.h"
#include "GFxShieldBar.generated.h"

class UGbxGFxRechargeableProgressBar;
class UGbxGFxObject;
class UShieldProviderInterface;
class IShieldProviderInterface;

UCLASS()
class OAKGAME_API UGFxShieldBar : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FGameResourcePoolReference CurrentShieldResourcePool;
    
    UPROPERTY(EditAnywhere)
    FString NAME_ProgressBarId;
    
    UPROPERTY(EditAnywhere)
    FName NAME_ShieldFull;
    
    UPROPERTY(EditAnywhere)
    FName NAME_ShieldLow;
    
    UPROPERTY(Transient)
    UGbxGFxRechargeableProgressBar* ProgressBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* EdgeFlash;
    
    UPROPERTY(Transient)
    UGbxGFxObject* HitDetect;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ShieldGlowAnim;
    
    UPROPERTY(Transient)
    int32 CachedShieldValue;
    
    UPROPERTY(Transient)
    bool bIsBeingDamaged;
    
    UPROPERTY(Transient)
    bool bIsDepleted;
    
    UPROPERTY(Transient)
    EHealthTypeState CachedHealthTypeState;
    
    UPROPERTY(Transient)
    EGameResourcePoolState CachedResourcePoolState;
    
    UPROPERTY(Transient)
    TScriptInterface<IShieldProviderInterface> CurrentShieldProvider;
    
public:
    UGFxShieldBar();
private:
    UFUNCTION()
    void OnTakeShieldDamage(int32 Index, const FHealthType& HealthType, float Damage, const FSecondaryHealthDamageEventDetails& Details) const;
    
    UFUNCTION()
    void OnShieldUnequippedOnSlot() const;
    
    UFUNCTION()
    void OnShieldsVeryLow(const FHealthType& HealthType, int32 Index) const;
    
    UFUNCTION()
    void OnShieldsRegenerating() const;
    
    UFUNCTION()
    void OnShieldsNormal(const FHealthType& HealthType, int32 Index) const;
    
    UFUNCTION()
    void OnShieldsLow(const FHealthType& HealthType, int32 Index) const;
    
    UFUNCTION()
    void OnShieldsFull() const;
    
    UFUNCTION()
    void OnShieldsDepleted(const FHealthTypeDepletedDetails& Details) const;
    
    UFUNCTION()
    void OnShieldMinMaxValueUpdate(FGameResourcePoolReference& ResourcePoolReference, float MinValue, float MaxValue) const;
    
    UFUNCTION()
    void OnShieldEquippedOnSlot() const;
    
    UFUNCTION()
    void OnShieldCurrentValueUpdate(FGameResourcePoolReference& ResourcePoolReference, float CurrentValue) const;
    
};

