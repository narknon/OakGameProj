#pragma once
#include "CoreMinimal.h"
#include "AIAction_VehicleEscort.h"
#include "UObject/NoExportTypes.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAction_VehicleEscortTarget.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API UAIAction_VehicleEscortTarget : public UAIAction_VehicleEscort {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector OffsetVector;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector OrientationReferenceKey;
    
    UAIAction_VehicleEscortTarget();
};

