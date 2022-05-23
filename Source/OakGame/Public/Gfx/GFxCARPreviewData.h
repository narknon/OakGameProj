#pragma once
#include "CoreMinimal.h"
#include "GFxCARPreviewData.generated.h"

class UOakCARVehicleData;
class UOakCARVehiclePartData;
class UGbxAction_CoordinatedEffect;

USTRUCT(BlueprintType)
struct FGFxCARPreviewData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UOakCARVehicleData* Vehicle;
    
    UPROPERTY()
    TArray<UOakCARVehiclePartData*> Parts;
    
    UPROPERTY()
    UOakCARVehicleData* SelectedVehicle;
    
    UPROPERTY()
    UOakCARVehiclePartData* SelectedPart;
    
    UPROPERTY()
    TSoftClassPtr<UGbxAction_CoordinatedEffect> CEToPlay;
    
    OAKGAME_API FGFxCARPreviewData();
};

