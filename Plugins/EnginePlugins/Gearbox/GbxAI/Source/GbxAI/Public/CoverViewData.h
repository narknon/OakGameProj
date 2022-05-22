#pragma once
#include "CoreMinimal.h"
#include "ECoverSlotHeight.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "CoverLineOfSightParams.h"
#include "CoverViewData.generated.h"

UCLASS()
class GBXAI_API UCoverViewData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECoverSlotHeight SlotHeight;
    
    UPROPERTY(EditAnywhere)
    FVector ViewOffset;
    
    UPROPERTY(EditAnywhere)
    FCoverLineOfSightParams TargetParams;
    
    UPROPERTY(EditAnywhere)
    float ForwardCheckDistance;
    
    UPROPERTY(EditAnywhere)
    FVector ForwardCheckExtent;
    
    UCoverViewData();
};

