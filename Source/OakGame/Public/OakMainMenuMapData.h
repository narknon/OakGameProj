#pragma once
#include "CoreMinimal.h"
#include "OakMapData.h"
#include "OakMainMenuMapData.generated.h"

class APostProcessVolume;
class APlayerStandIn;

UCLASS(EditInlineNew)
class OAKGAME_API UOakMainMenuMapData : public UOakMapData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    APlayerStandIn* CharacterSelectStandIn;
    
    UPROPERTY(EditAnywhere)
    APostProcessVolume* PostProcessVolume;
    
    UOakMainMenuMapData();
};

