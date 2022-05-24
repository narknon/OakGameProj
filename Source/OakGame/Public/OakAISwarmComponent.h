#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "SwarmActorEventDelegate.h"
#include "OakAISwarmMovement.h"
#include "OakAISwarmActor.h"
#include "OakAISwarmComponent.generated.h"

class USceneComponent;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakAISwarmComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSwarmActorEvent OnReachedDestination;
    
    UPROPERTY(BlueprintAssignable)
    FSwarmActorEvent OnDestroyed;
    
private:
    UPROPERTY(EditAnywhere)
    FOakAISwarmMovement DefaultMovement;
    
    UPROPERTY(EditAnywhere)
    bool bLimitToBounds;
    
    UPROPERTY(EditAnywhere)
    float ReachedDistance;
    
    UPROPERTY(Transient)
    TArray<FOakAISwarmActor> SwarmActors;
    
public:
    UOakAISwarmComponent();
    UFUNCTION(BlueprintCallable)
    void SetSwarmMovement(FOakAISwarmMovement Movement);
    
    UFUNCTION(BlueprintCallable)
    void SetSwarmDestination(USceneComponent* Destination);
    
    UFUNCTION(BlueprintCallable)
    void SetSwarmActorMovement(AActor* Actor, FOakAISwarmMovement Movement);
    
    UFUNCTION(BlueprintCallable)
    void SetSwarmActorDestination(AActor* Actor, USceneComponent* Destination);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSwarmActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddSwarmActor(AActor* Actor);
    
private:
    UFUNCTION()
    void ActorDestroyed(AActor* Actor);
    
};

