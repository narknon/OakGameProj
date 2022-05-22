#pragma once
#include "CoreMinimal.h"
#include "ActiveAmbientUpdater.h"
#include "UObject/NoExportTypes.h"
#include "ActiveAmbientUpdater_MoveInRandomDirection.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UActiveAmbientUpdater_MoveInRandomDirection : public UActiveAmbientUpdater {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatInterval SpeedRange;
    
    UActiveAmbientUpdater_MoveInRandomDirection();
};

