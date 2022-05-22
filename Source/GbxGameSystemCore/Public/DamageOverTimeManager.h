#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DamageOverTimeInstance.h"
#include "DamageOverTimeManager.generated.h"

class UParticleSystemComponent;

UCLASS(Transient)
class GBXGAMESYSTEMCORE_API UDamageOverTimeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FDamageOverTimeInstance> DamageInstances;
    
public:
    UDamageOverTimeManager();
    UFUNCTION()
    void OnParticleSystemStopped(UParticleSystemComponent* ParticleSystem);
    
};

