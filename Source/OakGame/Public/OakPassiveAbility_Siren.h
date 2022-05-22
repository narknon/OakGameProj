#pragma once
#include "CoreMinimal.h"
#include "OakPassiveAbility.h"
#include "EPhaseTranceElementalType.h"
#include "SirenArmControllerInterface.h"
#include "OakPassiveAbilitySirenGhostArmControllerSpec.h"
#include "OakPassiveAbility_Siren.generated.h"

class UOakActionAbilityAugmentData_PhaseTrance_Element;

UCLASS()
class UOakPassiveAbility_Siren : public UOakPassiveAbility, public ISirenArmControllerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bIsElementallyAttunedPassive;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbilityAugmentData_PhaseTrance_Element* AttunedElementData;
    
    UPROPERTY(Transient)
    FOakPassiveAbilitySirenGhostArmControllerSpec CurrentGhostArmControllerSpec;
    
public:
    UOakPassiveAbility_Siren();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttunedElementChanged();
    
    UFUNCTION(BlueprintPure)
    EPhaseTranceElementalType GetAttunedType();
    
    UFUNCTION(BlueprintCallable)
    void ActivateSirenGhostArms(const FOakPassiveAbilitySirenGhostArmControllerSpec& InSpec);
    
    
    // Fix for true pure virtual functions not being implemented
};

