#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityAllyQuerySpec.generated.h"

USTRUCT(BlueprintType)
struct FOakPlayerAbilityAllyQuerySpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bInfiniteRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIncludeCompanions;
    
    OAKGAME_API FOakPlayerAbilityAllyQuerySpec();
};

