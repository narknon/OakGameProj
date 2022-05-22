#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxDataAssetBlueprintable.generated.h"

UCLASS(Abstract)
class UGbxDataAssetBlueprintable : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UGbxDataAssetBlueprintable();
};

