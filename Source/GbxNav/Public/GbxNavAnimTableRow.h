#pragma once
#include "CoreMinimal.h"
#include "GbxAnimTableRow.h"
#include "NumericRange.h"
#include "GbxNavAnimTableRow.generated.h"

USTRUCT()
struct GBXNAV_API FGbxNavAnimTableRow : public FGbxAnimTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNumericRange Angle;
    
    UPROPERTY(EditAnywhere)
    bool bCorner;
    
    UPROPERTY(EditAnywhere)
    float CornerMaxAngle;
    
    UPROPERTY(EditAnywhere)
    bool bCanStretchRotation;
    
    UPROPERTY(EditAnywhere)
    bool bAutoFill;
    
    FGbxNavAnimTableRow();
};

