#pragma once
#include "CoreMinimal.h"
#include "OakAction_Anim.h"
#include "SirenArmControllerInterface.h"
#include "OakAction_Anim_PlayerMelee.generated.h"

class UMaterialInstance;

UCLASS()
class UOakAction_Anim_PlayerMelee : public UOakAction_Anim, public ISirenArmControllerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bRegisterAsSirenArmController;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInstance* GhostArmMaterial;
    
public:
    UOakAction_Anim_PlayerMelee();
    
    // Fix for true pure virtual functions not being implemented
};

