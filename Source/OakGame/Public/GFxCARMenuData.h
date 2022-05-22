#pragma once
#include "CoreMinimal.h"
#include "GFxMenuTutorialCollection.h"
#include "OakGFxMenuData.h"
#include "GFxCARMenuData.generated.h"

UCLASS()
class OAKGAME_API UGFxCARMenuData : public UOakGFxMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGFxMenuTutorialCollection Tutorials;
    
    UPROPERTY(EditAnywhere)
    FName FirstBootTutorial;
    
    UPROPERTY(EditAnywhere)
    int32 ShowBodyUnlockedTutorialIndex;
    
    UPROPERTY(EditAnywhere)
    int32 GoToDriverWeaponTutorialIndex;
    
    UPROPERTY(EditAnywhere)
    int32 ChooseDriverWeaponTutorialIndex;
    
    UPROPERTY(EditAnywhere)
    int32 DeployVehicleTutorialIndex;
    
    UGFxCARMenuData();
};

