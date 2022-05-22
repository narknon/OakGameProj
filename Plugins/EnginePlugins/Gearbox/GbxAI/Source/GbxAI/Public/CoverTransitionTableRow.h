#pragma once
#include "CoreMinimal.h"
#include "GbxAnimTableRow.h"
#include "NumericRange.h"
#include "ECoverSlotHeight.h"
#include "ECoverFaceDirection.h"
#include "CoverTransitionTableRow.generated.h"

class UCoverViewData;
class UCoverStyleData;
class UStanceDataProvider;

USTRUCT()
struct GBXAI_API FCoverTransitionTableRow : public FGbxAnimTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNumericRange Angle;
    
    UPROPERTY(EditAnywhere)
    FNumericRange Distance;
    
    UPROPERTY(EditAnywhere)
    float Height;
    
    UPROPERTY(EditAnywhere)
    ECoverFaceDirection FaceDirection;
    
    UPROPERTY(EditAnywhere)
    ECoverSlotHeight SlotHeight;
    
    UPROPERTY(EditAnywhere)
    TArray<UCoverStyleData*> CoverStyles;
    
    UPROPERTY(EditAnywhere)
    TArray<UCoverViewData*> ViewsFrom;
    
    UPROPERTY(EditAnywhere)
    TArray<UCoverViewData*> ViewsTo;
    
    UPROPERTY(EditAnywhere)
    bool bCornerTransition;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* Stance;
    
    UPROPERTY(EditAnywhere)
    bool bAutoFill;
    
    UPROPERTY(EditAnywhere)
    FNumericRange AutoFillAngle;
    
    UPROPERTY(EditAnywhere)
    FNumericRange AutoFillDistance;
    
    FCoverTransitionTableRow();
};

