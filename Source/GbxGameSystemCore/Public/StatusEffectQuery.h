#pragma once
#include "CoreMinimal.h"
#include "StatusEffectQuery.generated.h"

class UStatusEffectData;
class UObject;

USTRUCT(BlueprintType)
struct FStatusEffectQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStatusEffectData* StatusEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* Owner;
    
    GBXGAMESYSTEMCORE_API FStatusEffectQuery();
};

