#pragma once
#include "CoreMinimal.h"
#include "ReplicatedStolenProjectileData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FReplicatedStolenProjectileData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Socket;
    
    UPROPERTY()
    AActor* Projectile;
    
    OAKGAME_API FReplicatedStolenProjectileData();
};

