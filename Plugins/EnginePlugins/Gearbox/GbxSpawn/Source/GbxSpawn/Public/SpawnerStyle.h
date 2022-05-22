#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "SpawnerStyle.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class GBXSPAWN_API USpawnerStyle : public UGbxDataAsset {
    GENERATED_BODY()
public:
    USpawnerStyle();
};

