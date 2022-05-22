#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TargetingDebugServerRpcComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTargetingDebugServerRpcComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTargetingDebugServerRpcComponent();
    UFUNCTION(Reliable, Server, WithValidation)
    void SetInspectedActor(AActor* Actor);
    
};

