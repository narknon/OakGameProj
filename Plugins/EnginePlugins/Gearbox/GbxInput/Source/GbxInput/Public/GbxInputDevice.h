#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxInputDevice.generated.h"

UCLASS()
class GBXINPUT_API UGbxInputDevice : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FName DeviceName;
    
public:
    UGbxInputDevice();
};

