#pragma once
#include "CoreMinimal.h"
#include "DamageGoreModifiers.generated.h"

USTRUCT(BlueprintType)
struct FDamageGoreModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GoreModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GibModifier;
    
    GBXGAMESYSTEMCORE_API FDamageGoreModifiers();
};

