#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "StatusEffectStackingStrategyData.generated.h"

UCLASS(Abstract, Const)
class GBXGAMESYSTEMCORE_API UStatusEffectStackingStrategyData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UStatusEffectStackingStrategyData();
};

