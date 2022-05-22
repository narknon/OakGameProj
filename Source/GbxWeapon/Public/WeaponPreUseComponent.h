#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponPreUsedFinishedEventDelegate.h"
#include "WeaponPreUseComponent.generated.h"

class AWeapon;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponPreUseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWeaponPreUsedFinishedEvent NotifyPreUseFinished;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
private:
    UPROPERTY(Transient)
    AWeapon* WeaponPrivate;
    
public:
    UWeaponPreUseComponent();
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnDeactivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnActivated();
    
};

