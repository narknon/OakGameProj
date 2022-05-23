#pragma once
#include "CoreMinimal.h"
#include "GbxAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "EchoDeviceAnimInstance.generated.h"

class AEchoDevice;

UCLASS(NonTransient)
class UEchoDeviceAnimInstance : public UGbxAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AEchoDevice* EchoDeviceOwner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bOutsideOfMenuMode: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bButton1Pressed: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bButton2Pressed: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bButton3Pressed: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DPadXAxis;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DPadYAxis;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector2D DPadPosition;
    
public:
    UEchoDeviceAnimInstance();
};

