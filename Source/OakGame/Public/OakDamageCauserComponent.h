#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "DamageCauserComponent.h"
#include "WeaponShotModifierData.h"
#include "RegisteredWeaponShotModifier.h"
#include "OakDamageCauserComponent.generated.h"

class AWeapon;
class UWeaponShotModifier;
class UObject;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakDamageCauserComponent : public UDamageCauserComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FModifiedWeaponShotEvent, AWeapon*, Weapon, const FWeaponShotModifierData&, Data);
    
    UPROPERTY(BlueprintAssignable)
    FModifiedWeaponShotEvent OnModifiedWeaponShot;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat FirstShotInClipDamageMultiplier;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat LastShotInClipDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool bUsePlayerAsBalanceSourceForLevelSync;
    
protected:
    UPROPERTY(EditAnywhere)
    float MaxPassOverkillDamageToNextShotMultiplier;
    
    UPROPERTY(Transient)
    TArray<FRegisteredWeaponShotModifier> WeaponShotModifiers;
    
public:
    UOakDamageCauserComponent();
    UFUNCTION(BlueprintCallable)
    void UnregisterWeaponShotModifier(UWeaponShotModifier* Modifier, UObject* ModifierOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldPassOverkillDamageToNextShot(bool bNewValue, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void RegisterWeaponShotModifier(UWeaponShotModifier* Modifier, UObject* ContextOverride, UObject* ModifierOwner);
    
};

