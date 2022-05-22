#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "AdvancedInteractiveObjectOwnedGFxMenu.generated.h"

class UParticleSystem;

UCLASS()
class OAKGAME_API UAdvancedInteractiveObjectOwnedGFxMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bShowHalfWidthBackgroundScreenParticle;
    
    UPROPERTY(EditAnywhere)
    bool bShowFullWidthBackgroundScreenParticle;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* CustomBackdropParticleLoop;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* CustomBackdropParticleOff;
    
public:
    UAdvancedInteractiveObjectOwnedGFxMenu();
};

