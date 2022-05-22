#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GbxDataAsset.generated.h"

UCLASS(Abstract)
class GBXRUNTIME_API UGbxDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UGbxDataAsset();
};

