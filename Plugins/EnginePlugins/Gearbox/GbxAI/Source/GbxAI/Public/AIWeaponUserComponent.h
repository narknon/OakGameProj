#pragma once
#include "CoreMinimal.h"
#include "AIWeaponUseSettings.h"
#include "Components/ActorComponent.h"
#include "InspectionInfoProvider.h"
#include "AIWeaponUseEventSignatureDelegate.h"
#include "GbxParam.h"
#include "NumericRange.h"
#include "AIWeaponUserComponent.generated.h"

class UDamageComponent;
class UWeaponInterface;
class IWeaponInterface;
class UWeaponUserInterface;
class IWeaponUserInterface;
class UBlackboardComponent;
class AGbxCharacter;
class AGbxAIController;
class UCoverUserComponent;
class UAIPerceptionComponent;
class UTargetingComponent;
class UGbxCondition;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API UAIWeaponUserComponent : public UActorComponent, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FAIWeaponUseEventSignature ReloadEvent;
    
    UPROPERTY(BlueprintAssignable)
    FAIWeaponUseEventSignature BeginFiringEvent;
    
protected:
    UPROPERTY(Transient)
    AGbxAIController* AIController;
    
    UPROPERTY(Transient)
    AGbxCharacter* GbxCharacter;
    
private:
    UPROPERTY()
    float FireConeAngle;
    
    UPROPERTY(Transient)
    TScriptInterface<IWeaponUserInterface> WeaponUser;
    
    UPROPERTY(Transient)
    TScriptInterface<IWeaponInterface> Weapon;
    
    UPROPERTY(Export, Transient)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(Export, Transient)
    UCoverUserComponent* CoverUserComponent;
    
    UPROPERTY(Export, Transient)
    UBlackboardComponent* BlackboardComponent;
    
    UPROPERTY(Export, Transient)
    UAIPerceptionComponent* PerceptionComponent;
    
    UPROPERTY(Export, Transient)
    UTargetingComponent* TargetingComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* CanFireIf;
    
    UPROPERTY(EditAnywhere)
    FAIWeaponUseSettings Settings;
    
    UPROPERTY()
    FAIWeaponUseSettings SettingsOverride;
    
    UPROPERTY(Transient)
    bool bSuppressingFireTimeExpired;
    
    UPROPERTY()
    FGbxParam BurstCountOverride;
    
    UPROPERTY()
    bool bOverrideBurstCount;
    
    UPROPERTY()
    FGbxParam BurstDelayOverride;
    
    UPROPERTY()
    bool bOverrideBurstDelay;
    
    UPROPERTY()
    FGbxParam AccuracyOverride;
    
    UPROPERTY()
    bool bOverrideAccuracy;
    
    UPROPERTY()
    FNumericRange DesiredRangeOverride;
    
    UPROPERTY()
    bool bOverrideDesiredRange;
    
public:
    UAIWeaponUserComponent();
    UFUNCTION(BlueprintPure)
    bool WantsToFire() const;
    
private:
    UFUNCTION()
    void OnWeaponUsed();
    
    
    // Fix for true pure virtual functions not being implemented
};

