#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttributeInitializationData.h"
#include "GameResourcePoolReference.h"
#include "ShieldAugmentDamageEventData.h"
#include "AugmentData.h"
#include "WeaponShotModifierData.h"
#include "ReceivedDamageDetails.h"
#include "CausedDamageDetails.h"
#include "ShieldAugment.generated.h"

class AShield;
class AController;
class AWeapon;
class AOakCharacter;
class UDamageSource;
class UGbxDamageType;
class UDamageComponent;
class UDamageCauserComponent;
class AActor;

UCLASS(Abstract, Blueprintable, Const, EditInlineNew)
class UShieldAugment : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString PrimaryStackDescription;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttributeInitializationData> PrimaryStackValues;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString SecondaryStackDescription;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttributeInitializationData> SecondaryStackValues;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bUseReceivedDamageEvent: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bUseCausedDamageEvent: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bCallReceievedDamageEventForBarrierDamage: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FShieldAugmentDamageEventData ReceivedDamageEventData;
    
    UPROPERTY(EditDefaultsOnly)
    FShieldAugmentDamageEventData CausedDamageEventData;
    
    UPROPERTY(EditAnywhere)
    FName AugmentName;
    
public:
    UShieldAugment();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StartAugmentCooldown(AShield* Shield, UPARAM(Ref) FAugmentData& StackData, float CooldownDuration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDelay(AShield* Shield, UPARAM(Ref) FAugmentData& StackData, float Delay, FName DelayName) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnWeaponShotModified(AShield* Shield, UPARAM(Ref) FAugmentData& StackData, AWeapon* Weapon, const FWeaponShotModifierData& Data) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnWeaponChanged(AShield* Shield, UPARAM(Ref) FAugmentData& StackData, AWeapon* Weapon, AWeapon* LastWeapon) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnShieldUnequipped(AShield* Shield, AOakCharacter* Equipper, UPARAM(Ref) FAugmentData& StackData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnShieldNotFilled(AShield* Shield, FGameResourcePoolReference ResourcePool, UPARAM(Ref) FAugmentData& StackData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnShieldNotDepleted(AShield* Shield, FGameResourcePoolReference ResourcePool, UPARAM(Ref) FAugmentData& StackData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnShieldFilled(AShield* Shield, FGameResourcePoolReference ResourcePool, UPARAM(Ref) FAugmentData& StackData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnShieldEquipped(AShield* Shield, AOakCharacter* Equipper, UPARAM(Ref) FAugmentData& StackData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnShieldDepleted(AShield* Shield, FGameResourcePoolReference ResourcePool, UPARAM(Ref) FAugmentData& StackData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnShieldBeginPlay(AShield* Shield, UPARAM(Ref) FAugmentData& StackData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnShieldAbsorbedDamage(AShield* Shield, UPARAM(Ref) FAugmentData& StackData, const UDamageSource* DamageSource, const UGbxDamageType* DamageType) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnReplicatedEffectTriggered(AShield* Shield, UPARAM(Ref) FAugmentData& StackData, UObject* AdditionalContext) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnDamageTaken(AShield* Shield, UPARAM(Ref) FAugmentData& StackData, UDamageComponent* DamageReceiver, float Damage, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, AController* InstigatedBy, UDamageCauserComponent* DamageCauser, const FReceivedDamageDetails& Details) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnCausedDamage(AShield* Shield, UPARAM(Ref) FAugmentData& StackData, AActor* DamageInstigator, float Damage, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, AActor* DamagedActor, FCausedDamageDetails Details) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnBarrierEnd(AActor* BarrierActor, AShield* Shield, UPARAM(Ref) FAugmentData& StackData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_NativeDelayCallback(AShield* Shield, UPARAM(Ref) FAugmentData& StackData, FName DelayName) const;
    
    UFUNCTION(BlueprintPure)
    float GetValueFromStackCount(const FAugmentData& StackData, bool bPrimary) const;
    
};

