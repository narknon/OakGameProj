#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmpedShotSettings.generated.h"

class UWwiseEvent;
class UEffectCollectionData;

USTRUCT(BlueprintType)
struct FAmpedShotSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEffectCollectionData> AmpedShotTracerFX;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEffectCollectionData> AmpedShotBeamFX;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* AmpedShotSound;
    
    OAKGAME_API FAmpedShotSettings();
};

