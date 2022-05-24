#pragma once
#include "CoreMinimal.h"
#include "TedioreBehavior.h"
#include "ReceivedDamageDetails.h"
#include "TedioreBehavior_TargetCombo.generated.h"

class UGbxDamageType;
class USphereComponent;
class UStaticMeshComponent;
class UHealthTypeData;
class UGbxAttributeData;
class UDamageComponent;
class UWwiseEvent;
class UDamageSource;
class AController;
class UDamageCauserComponent;
class ATedioreProjectile;

UCLASS(EditInlineNew)
class UTedioreBehavior_TargetCombo : public UTedioreBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, Instanced)
    USphereComponent* TargetComboSphere;
    
    UPROPERTY(EditDefaultsOnly)
    float VisualDelay;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UStaticMeshComponent* TargetComboVisuals;
    
    UPROPERTY(EditDefaultsOnly)
    UHealthTypeData* HealthType;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* ComboDamageScale;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* ComboRadiusScale;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* OnTargetComboExplode;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* OnTargetComboStart;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* OnTargetComboEnd;
    
public:
    UTedioreBehavior_TargetCombo();
    UFUNCTION()
    void OnProjectileTakeAnyDamage(UDamageComponent* DamageReceiver, float Damage, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, AController* InstigatedBy, UDamageCauserComponent* DamageCauser, FReceivedDamageDetails Details);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnComboTargetTriggered(ATedioreProjectile* Projectile) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_ComboTargetTriggeredEvent(ATedioreProjectile* Projectile);
    
};

