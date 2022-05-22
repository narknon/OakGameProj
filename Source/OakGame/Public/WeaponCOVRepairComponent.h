#pragma once
#include "CoreMinimal.h"
#include "WeaponReloadComponent.h"
#include "COVRepairType.h"
#include "WeaponCOVRepairComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponCOVRepairComponent : public UWeaponReloadComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    uint8 CurrentRepairType;
    
    UPROPERTY(EditAnywhere)
    TArray<FCOVRepairType> RepairTypes;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ClientRepairState)
    uint16 ClientRepairState;
    
public:
    UWeaponCOVRepairComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ClientRepairState();
    
};

