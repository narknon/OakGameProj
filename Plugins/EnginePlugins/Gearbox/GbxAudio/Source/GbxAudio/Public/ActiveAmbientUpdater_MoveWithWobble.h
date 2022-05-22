#pragma once
#include "CoreMinimal.h"
#include "ActiveAmbientUpdater_MoveInRandomDirection.h"
#include "ActiveAmbientUpdater_MoveWithWobble.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UActiveAmbientUpdater_MoveWithWobble : public UActiveAmbientUpdater_MoveInRandomDirection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DirectionUpdateFrequency;
    
    UPROPERTY(EditAnywhere)
    float DirectionUpdateCone;
    
    UActiveAmbientUpdater_MoveWithWobble();
};

