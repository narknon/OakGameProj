#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CommandRingTarget.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct FCommandRingTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadOnly, Export)
    USceneComponent* BaseComponent;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator Rotation;
    
    OAKGAME_API FCommandRingTarget();
};

