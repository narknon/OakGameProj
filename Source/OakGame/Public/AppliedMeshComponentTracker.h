#pragma once
#include "CoreMinimal.h"
#include "AppliedMeshComponentTracker.generated.h"

class UMeshComponent;
class UOakStatusEffectManagerComponent;
class AActor;

USTRUCT(BlueprintType)
struct FAppliedMeshComponentTracker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UOakStatusEffectManagerComponent* ManagerComponent;
    
    UPROPERTY(Export)
    TArray<UMeshComponent*> TrackedMeshes;
    
    UPROPERTY()
    TArray<AActor*> ChildTargetActors;
    
public:
    OAKGAME_API FAppliedMeshComponentTracker();
};

