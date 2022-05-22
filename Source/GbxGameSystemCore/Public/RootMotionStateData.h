#pragma once
#include "CoreMinimal.h"
#include "RootMotionStateData.generated.h"

class UGbxCharacterMovementComponent;
class UGbxCharacterAnimInstance;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FRootMotionStateData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UGbxCharacterMovementComponent* GbxCharMoveComp;
    
    UPROPERTY()
    UGbxCharacterAnimInstance* GbxAnimInstance;
    
public:
    FRootMotionStateData();
};

