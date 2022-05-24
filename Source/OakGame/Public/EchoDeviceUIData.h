#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "EEchoDeviceButton.h"
#include "UObject/NoExportTypes.h"
#include "EchoDeviceUIData.generated.h"

UCLASS()
class UEchoDeviceUIData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, EEchoDeviceButton> InputActionMapping;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FVector2D> AxisInputMapping;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableMouseInput;
    
    UPROPERTY(EditDefaultsOnly)
    FName MouseXInputAction;
    
    UPROPERTY(EditDefaultsOnly)
    FName MouseYInputAction;
    
    UPROPERTY(EditDefaultsOnly)
    float MinimumMouseActivationDelta;
    
    UEchoDeviceUIData();
};

