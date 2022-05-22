#pragma once
#include "CoreMinimal.h"
#include "StatusEffectRemoveSpec.generated.h"

class UStatusEffectData;
class UObject;

USTRUCT(BlueprintType)
struct FStatusEffectRemoveSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStatusEffectData* StatusEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* EffectOwner;
    
    GBXGAMESYSTEMCORE_API FStatusEffectRemoveSpec();
};

