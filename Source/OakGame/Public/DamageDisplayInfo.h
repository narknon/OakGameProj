#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DamageDisplayInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FDamageDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* DamageNumberParticleSystem;
    
    UPROPERTY(EditAnywhere)
    FName DamageNumberParticleEventName;
    
    UPROPERTY(EditAnywhere)
    FName DamageNumberCritParticleEventName;
    
    UPROPERTY(EditAnywhere)
    FName DamageNumberResistParticleEventName;
    
    UPROPERTY(EditAnywhere)
    FName DamageNumberImmuneParticleEventName;
    
    UPROPERTY(EditAnywhere)
    FVector DamageNumberVehicleLocationOffset;
    
    OAKGAME_API FDamageDisplayInfo();
};

