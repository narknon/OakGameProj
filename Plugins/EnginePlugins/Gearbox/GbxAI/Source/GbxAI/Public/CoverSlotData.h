#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "CoverLineOfSightParams.h"
#include "CoverAdjustParams.h"
#include "UObject/NoExportTypes.h"
#include "CoverSlotData.generated.h"

class UCoverViewData;

UCLASS()
class GBXAI_API UCoverSlotData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SlotWidth;
    
    UPROPERTY(EditAnywhere)
    float SlotHeightLow;
    
    UPROPERTY(EditAnywhere)
    float SlotHeightHigh;
    
    UPROPERTY(EditAnywhere)
    bool bOffGroundCover;
    
    UPROPERTY(EditAnywhere)
    FCoverLineOfSightParams ExposedParams;
    
    UPROPERTY(EditAnywhere)
    bool bCheckExposure;
    
    UPROPERTY(EditAnywhere)
    FCoverAdjustParams AutoAdjustParams;
    
    UPROPERTY(EditAnywhere)
    TArray<UCoverViewData*> Views;
    
    UPROPERTY(EditAnywhere)
    FColor ValidColor;
    
    UPROPERTY(EditAnywhere)
    float NavSearchRadius;
    
    UCoverSlotData();
};

