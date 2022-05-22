#pragma once
#include "CoreMinimal.h"
#include "StandInLightingConfig.h"
#include "StandInLightingSetting.generated.h"

class UPlayerClassIdentifier;

USTRUCT(BlueprintType)
struct FStandInLightingSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FStandInLightingConfig DefaultLighting;
    
    UPROPERTY(EditAnywhere)
    TMap<UPlayerClassIdentifier*, FStandInLightingConfig> PlayerClassLighting;
    
    OAKGAME_API FStandInLightingSetting();
};

