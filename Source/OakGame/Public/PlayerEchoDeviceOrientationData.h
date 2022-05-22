#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PlayerEchoDeviceOrientationData.generated.h"

USTRUCT()
struct FPlayerEchoDeviceOrientationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bHideEchoInFirstPerson;
    
    UPROPERTY(EditAnywhere)
    bool bVerticalSplitscreenHideEchoInFirstPerson;
    
    UPROPERTY(EditAnywhere)
    bool bQuadSplitscreenHideEchoInFirstPerson;
    
    UPROPERTY(EditAnywhere)
    FVector2D ScreenPosition;
    
    UPROPERTY(EditAnywhere)
    FVector2D SplitScreenScreenPosition;
    
    UPROPERTY(EditAnywhere)
    FVector2D VerticalSplitScreenScreenPosition;
    
    UPROPERTY(EditAnywhere)
    FVector2D QuadSplitScreenScreenPosition;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator SplitScreenRotationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator VerticalSplitScreenRotationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator QuadSplitScreenRotationOffset;
    
    OAKGAME_API FPlayerEchoDeviceOrientationData();
};

