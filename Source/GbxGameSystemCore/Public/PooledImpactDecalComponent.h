#pragma once
#include "CoreMinimal.h"
#include "Components/DecalComponent.h"
#include "PooledImpactDecalComponent.generated.h"

UCLASS(Transient, ClassGroup=Custom, Within=ImpactDecalManager, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UPooledImpactDecalComponent : public UDecalComponent {
    GENERATED_BODY()
public:
    UPooledImpactDecalComponent();
};

