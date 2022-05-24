#pragma once
#include "CoreMinimal.h"
#include "VehicleConfigurationRtpc.generated.h"

class UGbxAttributeData;
class UWwiseRtpc;

USTRUCT(BlueprintType)
struct FVehicleConfigurationRtpc {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* RtpcParam;
    
    UPROPERTY(EditAnywhere)
    float DefaultValue;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* ValueAttribute;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateEveryFrame;
    
public:
    OAKGAME_API FVehicleConfigurationRtpc();
};

