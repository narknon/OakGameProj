#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeInitializationData.h"
#include "Curves/CurveFloat.h"
#include "ShakeScaleAssociation.generated.h"

class UCameraShake;

USTRUCT(BlueprintType)
struct FShakeScaleAssociation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShake> CameraShake;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseScale;
    
    UPROPERTY(VisibleAnywhere)
    bool bContinuous;
    
    UPROPERTY(EditAnywhere)
    bool bScaleDownOverTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseScaleOverTimeCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ScaleOverTimeCurve;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ContinuousScale;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ContinuousScaleCurve;
    
    GBXGAMESYSTEMCORE_API FShakeScaleAssociation();
};

