#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityResourceSpec.generated.h"

class UGbxAbility;

USTRUCT(BlueprintType)
struct FGbxAbilityResourceSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UGbxAbility* AbilityContext;
    
    UPROPERTY(BlueprintReadWrite)
    bool bWhenActive;
    
    UPROPERTY(BlueprintReadWrite)
    bool bWhenPaused;
    
    GBXABILITIES_API FGbxAbilityResourceSpec();
};

