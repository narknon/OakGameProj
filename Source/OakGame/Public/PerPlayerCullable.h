#pragma once
#include "CoreMinimal.h"
#include "PerPlayerCullable.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPerPlayerCullable {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* CullableActor;
    
    OAKGAME_API FPerPlayerCullable();
};

