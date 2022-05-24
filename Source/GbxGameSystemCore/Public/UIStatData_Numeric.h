#pragma once
#include "CoreMinimal.h"
#include "UIStatData.h"
#include "EUIStatValueSignStyle.h"
#include "EUIStatValueStyle.h"
#include "UIStatValueRemappingData.h"
#include "EUIStatValueRoundingMode.h"
#include "AttributeInitializationData.h"
#include "EUIStatCombinationMethod.h"
#include "UIStatData_Numeric.generated.h"

class UGbxCondition;
class UUIStatData_Numeric;

UCLASS(Abstract, EditInlineNew)
class GBXGAMESYSTEMCORE_API UUIStatData_Numeric : public UUIStatData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EUIStatValueStyle ValueStyle;
    
    UPROPERTY(EditAnywhere)
    EUIStatValueSignStyle SignStyle;
    
    UPROPERTY(EditAnywhere)
    EUIStatValueRoundingMode RoundingMode;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisplayAsPercentage: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisplayPercentAsFloat: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisplayAsInverse: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisplayPlusSign: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisplayAsOneMinus: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCalculateWithReductionMath: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseFormatText: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableValueRemapping: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseSupplementalStatFormatText: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseMinValueCondition: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseMaxValueCondition: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bMinOrMaxValueCondition: 1;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MinValueCondition;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MaxValueCondition;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    uint32 FloatPrecision;
    
    UPROPERTY(EditAnywhere)
    FText FormatText;
    
    UPROPERTY(EditAnywhere)
    FUIStatValueRemappingData ValueRemapping;
    
    UPROPERTY(EditAnywhere, Instanced)
    UUIStatData_Numeric* SupplementalStat;
    
    UPROPERTY(EditAnywhere)
    EUIStatCombinationMethod SupplementalStatCombinationMethod;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* SupplementalStatCondition;
    
    UPROPERTY(EditAnywhere)
    FText SupplementalStatFormatText;
    
    UUIStatData_Numeric();
};

