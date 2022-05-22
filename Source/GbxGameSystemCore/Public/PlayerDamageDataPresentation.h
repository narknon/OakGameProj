#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PlayerDamageDataPresentation.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FPlayerDamageDataPresentation {
    GENERATED_BODY()
public:
    UPROPERTY()
    UParticleSystem* ScreenParticle;
    
    UPROPERTY()
    FVector_NetQuantizeNormal HitDirection;
    
    GBXGAMESYSTEMCORE_API FPlayerDamageDataPresentation();
};

