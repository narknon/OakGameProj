#pragma once
#include "CoreMinimal.h"
#include "OakCARMenuVehicleConfig.h"
#include "OakCARMenuLoadoutCustomizer.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakCARMenuLoadoutCustomizer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FOakCARMenuVehicleConfig CurrentConfig;
    
    UPROPERTY(Transient)
    FOakCARMenuVehicleConfig PreviewConfig;
    
public:
    FOakCARMenuLoadoutCustomizer();
};

