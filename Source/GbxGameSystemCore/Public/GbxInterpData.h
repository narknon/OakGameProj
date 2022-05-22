#pragma once
#include "CoreMinimal.h"
#include "GbxInterpData.generated.h"

class AActor;
class AController;
class UMovementComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxInterpData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AActor* Actor;
    
    UPROPERTY()
    AController* Controller;
    
    UPROPERTY(Export)
    UMovementComponent* MoveComp;
    
public:
    FGbxInterpData();
};

