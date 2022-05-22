#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "TravelLocationData.generated.h"

UCLASS(Abstract)
class GBXTRAVELSTATION_API UTravelLocationData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UTravelLocationData();
};

