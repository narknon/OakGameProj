#pragma once
#include "CoreMinimal.h"
#include "OakControlledMove.h"
#include "SirenArmControllerInterface.h"
#include "OakControlledMove_Player.generated.h"

class UMaterialInstance;

UCLASS()
class UOakControlledMove_Player : public UOakControlledMove, public ISirenArmControllerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bRegisterAsSirenArmController;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInstance* GhostArmMaterial;
    
public:
    UOakControlledMove_Player();
    
    // Fix for true pure virtual functions not being implemented
};

