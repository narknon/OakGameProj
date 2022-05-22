#pragma once
#include "CoreMinimal.h"
#include "GbxAction_Gib.h"
#include "OakElementalGibData.h"
#include "OakAction_Gib.generated.h"

UCLASS()
class OAKGAME_API UOakAction_Gib : public UGbxAction_Gib {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bUseGoreRegionLimbs;
    
    UPROPERTY(EditAnywhere)
    FOakElementalGibData Corrosive;
    
    UPROPERTY(EditAnywhere)
    FOakElementalGibData Cryo;
    
    UPROPERTY(EditAnywhere)
    FOakElementalGibData Fire;
    
    UPROPERTY(EditAnywhere)
    FOakElementalGibData Shock;
    
    UPROPERTY(EditAnywhere)
    FOakElementalGibData Radiation;
    
    UPROPERTY(EditAnywhere)
    float ImpulseModifier;
    
public:
    UOakAction_Gib();
};

