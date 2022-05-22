#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LastCollisionDamageInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLastCollisionDamageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* HitActor;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOwnerIsCollider;
    
    UPROPERTY(BlueprintReadOnly)
    FVector RelativeVelocity;
    
    OAKGAME_API FLastCollisionDamageInfo();
};

