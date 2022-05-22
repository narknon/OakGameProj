#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGbxAbilityDurationType.h"
#include "GbxAbilitySpec.generated.h"

class UGbxAbility;

USTRUCT(BlueprintType)
struct FGbxAbilitySpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UGbxAbility> AbilityClass;
    
    UPROPERTY(BlueprintReadWrite)
    EGbxAbilityDurationType DurationType;
    
    UPROPERTY(BlueprintReadWrite)
    float DurationInitializerData;
    
    GBXABILITIES_API FGbxAbilitySpec();
};

