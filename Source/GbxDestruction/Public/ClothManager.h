#pragma once
#include "CoreMinimal.h"
#include "ClothManagerInterface.h"
#include "ClothManager.generated.h"

UCLASS()
class GBXDESTRUCTION_API AClothManager : public AClothManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    float MaxAllowedSimCost;
    
    UPROPERTY()
    float TimeOffScreenBeforeSimulationPause;
    
    AClothManager();
};

