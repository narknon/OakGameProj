#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxItemCardAbbreviatedObject.h"
#include "Engine/EngineTypes.h"
#include "GFxItemCardAbbreviated.generated.h"

class UOakInventoryBalanceStateComponent;
class AWeapon;
class APawn;

UCLASS()
class UGFxItemCardAbbreviated : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGFxItemCardAbbreviatedObject ItemCardObject;
    
private:
    UPROPERTY(EditAnywhere)
    float TimeUntilOutro;
    
    UPROPERTY(Transient)
    FTimerHandle TimerHandle;
    
public:
    UGFxItemCardAbbreviated();
protected:
    UFUNCTION()
    void OnWeaponChanged(AWeapon* Weapon, AWeapon* LastWeapon) const;
    
    UFUNCTION()
    void OnPawnChanged(APawn* Pawn, APawn* OldPawn) const;
    
    UFUNCTION()
    void OnEndCompareToEquippedItem() const;
    
    UFUNCTION()
    void OnCompareToEquippedItem(UOakInventoryBalanceStateComponent* HeldItem, UOakInventoryBalanceStateComponent* OtherItem) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDisplayed() const;
    
protected:
    UFUNCTION()
    void HideAfterDelay() const;
    
};

