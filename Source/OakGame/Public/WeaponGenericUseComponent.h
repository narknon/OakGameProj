#pragma once
#include "CoreMinimal.h"
#include "WeaponUseComponent.h"
#include "WeaponGenericUseComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponGenericUseComponent : public UWeaponUseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bIsSelfContainedLoopingMontage;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bIsUsing)
    bool bIsUsing;
    
public:
    UWeaponGenericUseComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_bIsUsing();
    
};

