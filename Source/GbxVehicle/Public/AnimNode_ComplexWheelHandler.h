#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "ComplexWheelMovement.h"
#include "AnimNode_ComplexWheelHandler.generated.h"

USTRUCT(BlueprintType)
struct GBXVEHICLE_API FAnimNode_ComplexWheelHandler : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FComplexWheelMovement> WheelMovementSystems;
    
    FAnimNode_ComplexWheelHandler();
};

