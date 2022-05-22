#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OakModifierTargetResolverData.generated.h"

class UGbxAbilityEffectTargetResolutionData;

USTRUCT()
struct FOakModifierTargetResolverData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<UGbxAbilityEffectTargetResolutionData*> TargetResolvers;
    
private:
    UPROPERTY()
    UGbxAbilityEffectTargetResolutionData* TargetResolver;
    
public:
    OAKGAME_API FOakModifierTargetResolverData();
};

