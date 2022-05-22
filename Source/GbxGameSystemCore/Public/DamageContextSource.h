#pragma once
#include "CoreMinimal.h"
#include "DamageContextSource.generated.h"

class AActor;
class APawn;

USTRUCT(BlueprintType)
struct FDamageContextSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* SourceActor;
    
    UPROPERTY()
    APawn* Instigator;
    
    GBXGAMESYSTEMCORE_API FDamageContextSource();
};

