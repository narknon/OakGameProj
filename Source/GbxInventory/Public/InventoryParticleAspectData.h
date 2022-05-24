#pragma once
#include "CoreMinimal.h"
#include "ConditionalInventoryParticleEmitter.h"
#include "InventoryAspectData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InventoryParticleAspectData.generated.h"

class UParticleSystem;

UCLASS(EditInlineNew)
class GBXINVENTORY_API UInventoryParticleAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(EditAnywhere)
    FName ComponentName;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeTranslation;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(EditAnywhere)
    TArray<FConditionalInventoryParticleEmitter> ConditionalEmitters;
    
    UInventoryParticleAspectData();
};

