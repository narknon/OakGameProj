#pragma once
#include "CoreMinimal.h"
#include "ESirenGhostArmConfigurationType.h"
#include "SirenGhostArmConfiguration.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FSirenGhostArmConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESirenGhostArmConfigurationType GhostArmConfiguration;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstance* MaterialInstance;
    
    OAKGAME_API FSirenGhostArmConfiguration();
};

