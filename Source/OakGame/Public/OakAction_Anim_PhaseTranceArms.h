#pragma once
#include "CoreMinimal.h"
#include "OakAction_Anim.h"
#include "SirenArmControllerInterface.h"
#include "OakAction_Anim_PhaseTranceArms.generated.h"

class UMaterialInstance;

UCLASS()
class UOakAction_Anim_PhaseTranceArms : public UOakAction_Anim, public ISirenArmControllerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UMaterialInstance* SirenArmMaterialInstance;
    
public:
    UOakAction_Anim_PhaseTranceArms();
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateThirdPersonArms();
    
    UFUNCTION(BlueprintCallable)
    void ActivateFirstPersonArms();
    
    
    // Fix for true pure virtual functions not being implemented
};

