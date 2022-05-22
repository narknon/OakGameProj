#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StandInLightingSetting.h"
#include "StandInScaleSetting.h"
#include "StandInPositionSetting.h"
#include "StandInUIConfigData.generated.h"

USTRUCT()
struct FStandInUIConfigData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPositionRelativeToEchoDeviceProjectionSocket;
    
    UPROPERTY(EditAnywhere)
    FName CustomPivotSocket;
    
    UPROPERTY(EditAnywhere)
    bool bLockStandInPositionOnFadeOut;
    
    UPROPERTY(EditAnywhere)
    FStandInLightingSetting Lighting;
    
    UPROPERTY(EditAnywhere)
    FStandInScaleSetting Scale;
    
    UPROPERTY(EditAnywhere)
    FStandInPositionSetting Positioning;
    
    UPROPERTY(EditAnywhere)
    FStandInScaleSetting ScaleSplitScreen;
    
    UPROPERTY(EditAnywhere)
    FStandInScaleSetting ScaleVerticalSplitScreen;
    
    UPROPERTY(EditAnywhere)
    FStandInScaleSetting ScaleQuadSplitScreen;
    
    UPROPERTY(EditAnywhere)
    FStandInPositionSetting PositioningSplitScreen;
    
    UPROPERTY(EditAnywhere)
    FStandInPositionSetting PositioningVerticalSplitScreen;
    
    UPROPERTY(EditAnywhere)
    FStandInPositionSetting PositioningQuadSplitScreen;
    
    UPROPERTY(EditAnywhere)
    bool bMayAlterRotationDamping;
    
    UPROPERTY(EditAnywhere)
    float RotationDamping;
    
    UPROPERTY(EditAnywhere)
    float LocationDamping;
    
    OAKGAME_API FStandInUIConfigData();
};

