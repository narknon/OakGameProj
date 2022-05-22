#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelDataProvider.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class GBXFLUIDSIMULATION_API UVoxelDataProvider : public UObject {
    GENERATED_BODY()
public:
    UVoxelDataProvider();
};

