#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "AttributeEffectMutatorData.generated.h"

UCLASS(Abstract, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UAttributeEffectMutatorData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UAttributeEffectMutatorData();
};

