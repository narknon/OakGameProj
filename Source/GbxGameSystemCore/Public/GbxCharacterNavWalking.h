#pragma once
#include "CoreMinimal.h"
#include "GbxCharacterNavWalking.generated.h"

class UGbxCharacterMovementComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxCharacterNavWalking {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UGbxCharacterMovementComponent* MoveComp;
    
public:
    FGbxCharacterNavWalking();
};

