#pragma once
#include "CoreMinimal.h"
#include "HornSequenceEntry.h"
#include "AIAspectSettings_VehicleHorn.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_VehicleHorn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHornSequenceEntry> HornSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStopWithAction;
    
    OAKGAME_API FAIAspectSettings_VehicleHorn();
};

