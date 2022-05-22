#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "UObject/NoExportTypes.h"
#include "CameraBehavior_RaidSpectator.generated.h"

UCLASS(EditInlineNew)
class UCameraBehavior_RaidSpectator : public UCameraBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float HorizontalOffset;
    
    UPROPERTY(EditAnywhere)
    float VerticalOffset;
    
    UPROPERTY(EditAnywhere)
    float MaxRotateSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxZoom;
    
    UPROPERTY(EditAnywhere)
    float MaxZoomSpeed;
    
    UPROPERTY(EditAnywhere)
    float CameraPitchMin;
    
    UPROPERTY(EditAnywhere)
    float CameraPitchMax;
    
    UPROPERTY(EditAnywhere)
    FVector IronBearAdditionalOffset;
    
public:
    UCameraBehavior_RaidSpectator();
};

