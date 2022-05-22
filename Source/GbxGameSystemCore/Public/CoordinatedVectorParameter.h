#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveLinearColor.h"
#include "Curves/CurveFloat.h"
#include "CoordinatedVectorParameter.generated.h"

USTRUCT(BlueprintType)
struct FCoordinatedVectorParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName ParamName;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeCurveLinearColor ParamValueOverTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bLoop: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bBlendFromInitialValue: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bBlendUsingHSV: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve BlendCurve;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bSpecificMaterial: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> SpecificMaterialList;
    
    GBXGAMESYSTEMCORE_API FCoordinatedVectorParameter();
};

