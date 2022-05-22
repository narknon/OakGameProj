#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "StanceDataProvider.generated.h"

UCLASS(Abstract)
class GBXGAMESYSTEMCORE_API UStanceDataProvider : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UStanceDataProvider();
};

