#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WeaponAnimInstance.generated.h"

class AWeapon;
class UWeaponAttachmentSlot;

UCLASS(NonTransient)
class GBXWEAPON_API UWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    AWeapon* Weapon;
    
    UPROPERTY(Transient)
    UWeaponAttachmentSlot* Slot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float ZoomDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float ZoomEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bIsZoomedIn;
    
    UWeaponAnimInstance();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintSwitchedMode(int32 NewMode);
    
};

