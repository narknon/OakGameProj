#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EMantleType.h"
#include "Curves/CurveFloat.h"
#include "MantleActionData.generated.h"

class UGbxAction;

USTRUCT(BlueprintType)
struct FMantleActionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMantleType Type;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> Animation;
    
    UPROPERTY(EditAnywhere)
    float HeightMinimum;
    
    UPROPERTY(EditAnywhere)
    float AlignTime;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve HorizontalCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve VerticalCurve;
    
    UPROPERTY(EditAnywhere)
    float PercentThroughAnimationToFinishMantle;
    
    UPROPERTY(EditAnywhere)
    uint8 bAlignRotation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bMustLookAt: 1;
    
    GBXGAMESYSTEMCORE_API FMantleActionData();
};

