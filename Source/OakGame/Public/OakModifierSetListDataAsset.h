#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "OakModifierSet.h"
#include "OakModifierSetListDataAsset.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UOakModifierSetListDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FOakModifierSet> ModifierSets;
    
    UOakModifierSetListDataAsset();
};

