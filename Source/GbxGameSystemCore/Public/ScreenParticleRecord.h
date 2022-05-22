#pragma once
#include "CoreMinimal.h"
#include "ScreenParticleRecord.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FScreenParticleRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    UParticleSystem* Template;
    
    UPROPERTY(Export)
    UParticleSystemComponent* Component;
    
    GBXGAMESYSTEMCORE_API FScreenParticleRecord();
};

