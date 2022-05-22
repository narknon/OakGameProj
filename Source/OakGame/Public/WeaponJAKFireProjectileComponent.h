#pragma once
#include "CoreMinimal.h"
#include "WeaponFireProjectileComponent.h"
#include "WeaponJAKFireProjectileComponent.generated.h"

class UStatusEffectData;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponJAKFireProjectileComponent : public UWeaponFireProjectileComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bStackCrits;
    
    UPROPERTY(EditAnywhere)
    bool bNonSuccessiveCritBreaksStack;
    
    UPROPERTY(EditAnywhere)
    UStatusEffectData* StackStatusEffectData;
    
    UPROPERTY(EditAnywhere)
    float StackStatusEffectDuration;
    
    UPROPERTY(EditAnywhere)
    int32 RefundAmmoCount;
    
    UPROPERTY(EditAnywhere)
    int32 RicochetCount;
    
    UPROPERTY(EditAnywhere)
    float RicochetDamageScale;
    
    UWeaponJAKFireProjectileComponent();
    UFUNCTION(BlueprintCallable)
    void ResetStack();
    
};

