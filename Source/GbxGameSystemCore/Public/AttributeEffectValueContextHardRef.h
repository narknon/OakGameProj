#pragma once
#include "CoreMinimal.h"
#include "AttributeEffectValueContextHardRef.generated.h"

class UObject;

USTRUCT()
struct GBXGAMESYSTEMCORE_API FAttributeEffectValueContextHardRef {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* Context;
    
    UPROPERTY()
    UObject* ContextResolverOverride;
    
    FAttributeEffectValueContextHardRef();
};

