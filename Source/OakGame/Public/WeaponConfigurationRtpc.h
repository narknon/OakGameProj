#pragma once
#include "CoreMinimal.h"
#include "WeaponConfigurationRtpc.generated.h"

class UWwiseRtpc;

USTRUCT(BlueprintType)
struct FWeaponConfigurationRtpc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseRtpc* RtpcParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(Transient)
    float PriorityAveragingSum;
    
    OAKGAME_API FWeaponConfigurationRtpc();
};

