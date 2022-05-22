#pragma once
#include "CoreMinimal.h"
#include "CohtmlSound.generated.h"

class UAudioComponent;
class USoundWaveProcedural;

USTRUCT(BlueprintType)
struct FCohtmlSound {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UAudioComponent* Component;
    
    UPROPERTY()
    USoundWaveProcedural* Stream;
    
    COHTMLPLUGIN_API FCohtmlSound();
};

