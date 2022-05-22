#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponDebugInterface.h"
#include "WeaponRecoilComponent.generated.h"

class URecoilControlComponent;
class AWeapon;

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponRecoilComponent : public UActorComponent, public IWeaponDebugInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    URecoilControlComponent* CachedControlComponent;
    
    UPROPERTY(Transient)
    AWeapon* WeaponPrivate;
    
public:
    UWeaponRecoilComponent();
protected:
    UFUNCTION()
    void OnUsed();
    
    UFUNCTION()
    void OnDetached();
    
    UFUNCTION()
    void OnAttached();
    
    
    // Fix for true pure virtual functions not being implemented
};

