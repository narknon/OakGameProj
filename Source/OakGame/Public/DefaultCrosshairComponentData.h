#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "DefaultCrosshairData.h"
#include "DefaultCrosshairComponentData.generated.h"

UCLASS(BlueprintType)
class UDefaultCrosshairComponentData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDefaultCrosshairData> CrosshairWidgetsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> CrosshairAnimationWidgetNames;
    
    UDefaultCrosshairComponentData();
};

