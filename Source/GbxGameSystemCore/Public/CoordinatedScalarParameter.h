#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "ECoordinatedEffectParamScaleMode.h"
#include "AttributeInitializationData.h"
#include "CoordinatedScalarParameter.generated.h"

USTRUCT(BlueprintType)
struct FCoordinatedScalarParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName ParamName;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve ParamValueOverTime;
    
    UPROPERTY(EditDefaultsOnly)
    ECoordinatedEffectParamScaleMode ScaleMode;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EAxis::Type> WorldSpaceAxis;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bLoop: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bBlendFromInitialValue: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve BlendCurve;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bApplyAttribute: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bScaleAttributeByValueOverTime: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData ParamAttributeValue;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bSpecificMaterial: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> SpecificMaterialList;
    
    GBXGAMESYSTEMCORE_API FCoordinatedScalarParameter();
};

