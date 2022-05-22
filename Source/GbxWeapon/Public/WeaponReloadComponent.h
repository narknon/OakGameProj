#pragma once
#include "CoreMinimal.h"
#include "GbxReplicatorProxyData.h"
#include "Components/ActorComponent.h"
#include "WeaponDebugInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "WeaponReloadComponent.generated.h"

class AWeapon;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponReloadComponent : public UActorComponent, public IWeaponDebugInterface, public IGbxReplicatorProxyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 ReloadPartType;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponReloadStartedEvent NotifyReloadStarted;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponReloadEndedEvent NotifyReloadEnded;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponReloadAmmoGivenEvent NotifyAmmoGiven;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FGbxAttributeFloat ReloadTime;
    
private:
    UPROPERTY(Transient)
    AWeapon* WeaponPrivate;
    
public:
    UWeaponReloadComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    
    // Fix for true pure virtual functions not being implemented
};

