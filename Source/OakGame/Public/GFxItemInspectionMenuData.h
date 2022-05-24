#pragma once
#include "CoreMinimal.h"
#include "OakGFxMenuData.h"
#include "GFxItemInspectionMenuData.generated.h"

UCLASS()
class UGFxItemInspectionMenuData : public UOakGFxMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AxialDeadZoneBegin_Pan;
    
    UPROPERTY(EditAnywhere)
    float AxialDeadZoneRatio_Pan;
    
    UPROPERTY(EditAnywhere)
    float AxialDeadZoneBegin_Rotate;
    
    UPROPERTY(EditAnywhere)
    float AxialDeadZoneRatio_Rotate;
    
    UGFxItemInspectionMenuData();
};

